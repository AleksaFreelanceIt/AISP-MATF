#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> poznanik(n,vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j<n; j++)
            cin >> poznanik[i][j];
            
    int i = 0;
    for(int j = 1; j<n; j++)
        if(poznanik[i][j])
            i = j;
    
    bool zvezda = true;
    for(int j = 0; j < n; j++){
        if(i != j && poznanik[i][j]) zvezda = false;
        if(i != j && !poznanik[j][i]) zvezda = false;
    }
    
    if(zvezda) cout << i << '\n';
    else cout << "Nema zvezde\n";
    return 0;
}
