#include <iostream>
#include <set>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    set<int> skup;
    int brojac = 0;
    for(int i = 0; i<n;i++)
        cin >> niz[i];
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(skup.find(-niz[i]-niz[j]) != skup.end()) brojac++;
        }
        skup.insert(niz[i]);
    }
    
    cout << brojac << '\n';
    return 0;
}
