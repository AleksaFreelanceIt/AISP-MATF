#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> matrica(n, vector<int>(n));
    vector<vector<int>> dp(n, vector<int>(n, numeric_limits<int>::min()));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> matrica[i][j];
    dp[0][0] = matrica[0][0];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            if(matrica[0][0] == 0) continue;
            
            if(i > 0 && dp[i-1][j] != numeric_limits<int>::min() && matrica[i-1][j] != 0)  //[i][j] se dobija ili dolaskom od levo
                dp[i][j] = max(dp[i][j], dp[i-1][j] + matrica[i][j]);
            if(j > 0 && dp[i][j-1] != numeric_limits<int>::min() && matrica[i][j-1] != 0)  //ili dolaskom od gore
                dp[i][j] = max(dp[i][j], dp[i][j-1] + matrica[i][j]);
    }
    
    if(dp[n-1][n-1] == numeric_limits<int>::min()) cout << "NEMA\n";
    else cout << dp[n-1][n-1] << '\n';
    return 0;
}
