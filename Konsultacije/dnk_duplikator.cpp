  #include <iostream>
#include <string>

using namespace std;
char comp(char c){
    switch(c){
    case 'A': return 'T';
    case 'T': return 'A';
    case 'C': return 'G';
    case 'G': return 'C';
    default: return c;
    }
}
char kti_karakter(const string &s, const vector<char>& op, const int i, const int k, const int N, bool komplement){
    if(i == -1) return komplement ? comp(s[k]) : s[k];
    int nov_N = N/2;
    
    if(k < nov_N)
        return kti_karakter(s, op, i-1, k, nov_N, komplement);
    
    komplement = op[i] == 'C' ? !komplement : komplement;
    return kti_karakter(s, op, i-1, k - nov_N, nov_N, komplement);
}

int main(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<char> operatori(n);
    
    int N = s.size() * (1 << n);
    cout << kti_karakter(s, operatori, n-1, k, N, false) << '\n';
    
}
