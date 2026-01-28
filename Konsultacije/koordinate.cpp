#include <iostream>
#include <vector>

using namespace std;

void pronadji_broj(vector<vector<int>>& matrica, const int broj){
    int red = -1, kolona = -1;
    int n = matrica.size(), m = matrica[0].size();
    int i = 0, j = m-1;
    
    bool pronadjen = false;
    while(i < n && j >= 0){
        if(matrica[i][j] < broj) i++;
        else if(matrica[i][j] > broj) j--;
        else {
            pronadjen = true;
            red = i +1;
            kolona = j+1;
            break;
        }
    }
    if(pronadjen) cout << red << " " << kolona << '\n';
    else cout << -1 << '\n';
}

int main(){
    int n, m, q; cin >> n >> m >> q;
    vector<vector<int>> matrica(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrica[i][j];
            
    for(int i = 0; i < q; i++){
        int broj; cin >> broj;
        pronadji_broj(matrica, broj);
    }   
    
    return 0;
}
