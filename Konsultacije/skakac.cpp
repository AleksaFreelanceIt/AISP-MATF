#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>>potezi = { {1, 2}, {-1, 2}, {1, -2}, {-1, -2}, {2,1}, {2, -1}, {-2, 1}, {-2, -1}};
void skakac(int i, int j, vector<vector<int>>& tabla){
    int n = tabla.size();
    if(tabla[i][j] == 1) return;
    else if(tabla[i][j] == 2) return;
    
    tabla[i][j] = 2;
    
    for(auto potez : potezi){
          int temp_i = i + potez.first, temp_j = j + potez.second;
          if(temp_i >= 0 && temp_i < n && temp_j >= 0 && temp_j < n)
              skakac(temp_i, temp_j, tabla);
    }
}

int main(){
    int n; cin >> n;
    vector<vector<int>> tabla(n, vector<int>(n,0));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> tabla[i][j];
    tabla[n-1][0] = 0;
    
    skakac(n-1, 0, tabla);
    tabla[n-1][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << tabla[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
