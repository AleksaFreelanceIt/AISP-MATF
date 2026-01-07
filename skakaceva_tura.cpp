#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

vector<pair<int,int>> potezi = { {1,2}, {-1,2}, {1, -2}, {-1, -2}, {2, 1}, {-2,1}, {2,-1}, {-2,-1} };

int n,m;
void ispisi(vector<vector<int>> & tabla){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << setw(2) << tabla[i][j] << " ";
        cout << '\n';
    }
        cout << '\n';
}

void obilazak(int i, int j, int br, vector<vector<int>>& tabla){
    tabla[i][j] = br;
    
    if(br == n*m)
        ispisi(tabla);
    
    for( auto potez : potezi){
        int ni  = i + potez.first; int nj = j + potez.second;
        if(ni >= 0 && ni < n && nj >= 0 && nj < m && tabla[ni][nj] == 0)
            obilazak(ni, nj, br+1, tabla);
    }
    tabla[i][j] = 0;
}

int main(){
    cin >> n >> m;
    vector<vector<int>> tabla(n,vector<int>(m,0));

    obilazak(0,0,1,tabla);
    cout << '\n';
    return 0;
}
