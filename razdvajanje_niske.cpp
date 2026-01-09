#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();
    vector<int>abeceda(26);
    for(char c: s)
        abeceda[c - 'a']++;
    priority_queue< pair<int, char> > pq;
    for(int i = 0; i < n; i++){
        if(abeceda[i])
            pq.push({abeceda[i], i+'a'});
    }
    
    string rez;
    pair<int, char> najcesci;
    najcesci = pq.top();
    pq.pop();
    rez.push_back(najcesci.second);
    int br_prethodnog = najcesci.first -1;
    for(int i = 1; i < n; i++){
        if(pq.empty()){ cout << "nema resenja\n"; return 0;}
        najcesci = pq.top();
        pq.pop();
        rez.push_back(najcesci.second);
        if(br_prethodnog)
            pq.push({br_prethodnog, rez[i-1]});
        br_prethodnog = najcesci.first -1;
    }

    cout << rez << '\n';
    return 0;
}
