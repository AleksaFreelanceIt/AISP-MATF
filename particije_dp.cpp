#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> dp(n+1);    //Prostorski optimizovanije resenje
    dp[0] = 1;
    
    for(int m = 1; m<= n; m++)
        for(int i = 1; i <= n; i++)
            if( i >= m ) dp[i] += dp[i-m];
    
    cout << dp[n] << '\n';
    
    /*vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    dp[0] = vector<int>(n+1, 1);
    
    for(int i = 1; i<= n; i++)
        for(int m = 1; m <= n; m++){
            dp[i][m] = dp[i][m-1];
            if( i >= m ) dp[i][m] += dp[i-m][m];
        }
    
    cout << dp[n][n] << '\n';*/
    return 0;
}
