#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

char kti_karakter(vector<char>& operacija, int n, int k, int eksp, string& s){
    if( n == 0)
        return s[k];
    
    int m = eksp/2;
    if(k < m)
        return kti_karakter(operacija, n-1, k, m, s);
    if(operacija[n-1] == 'k'){
        return kti_karakter(operacija, n-1, k - m, m, s);
    } else {
        return kti_karakter(operacija, n-1, 2*m-k-1, m, s);
    }
}

int main(){
    int n, k; string s; cin >> n >> k >> s;
    int eksp = s.size() * (1 << n);
    vector<char> operacija(n);
    for(int i = 0; i < n; i++)
        cin >> operacija[i];
    
    cout << kti_karakter(operacija, n, k, eksp, s) << '\n';
    return 0;
}
