#include <iostream>
#include <vector>

using namespace std;

int particije(vector<int>& niz){
    int n = niz.size();
    vector<int> dp(n+1);
    dp[n] = 1;
    
    int suma_parnih = 0, suma_neparnih = 0;
    for(int i = n-1; i >= 0; i--){
        if(niz[i] % 2 == 0){
            suma_parnih += dp[i+1];
            dp[i] = suma_parnih;
        } else {
            suma_neparnih +=  dp[i+1];
            dp[i] = suma_neparnih;
        }
    }
    return dp[0];
}

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    
    cout << particije(niz) << '\n';
    return 0;
}
