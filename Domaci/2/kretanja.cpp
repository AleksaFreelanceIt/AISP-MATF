#include <iostream>
#include <vector>

using namespace std;

void kretanja_rezultata(vector<pair<int, int>>& rezultat, int a, int b, int i, int j, int& broj_redova){
    if(broj_redova >= 1000) return;
    rezultat[i+j] = {i, j};
    
    if( a == i && b == j){
        for(auto& par : rezultat)
            cout << par.first << ":" << par.second << " ";
        cout << '\n';
        broj_redova++;
        return;
    }
    if(b != j)
        kretanja_rezultata(rezultat, a, b, i, j+1, broj_redova);
    if(a != i)
        kretanja_rezultata(rezultat, a, b, i+1, j, broj_redova);
}

int main(){
    int a, b, broj_redova = 0; cin >> a >> b;
    vector<pair<int, int>> rezultat(a+b+1);
    
    kretanja_rezultata(rezultat, a, b, 0, 0, broj_redova);
    return 0;
}
