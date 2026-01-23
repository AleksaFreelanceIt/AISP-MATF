#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n, max_distanca = 0; cin >> n;
    map<int, int> mapa;             //broj, indeks
    for(int i = 0; i < n; i++){
        int broj; cin >> broj;
        if(mapa.find(broj) == mapa.end()) mapa[broj] = i;
        
        auto it = mapa.find(-broj);
        if( it != mapa.end()){
            int prvi = i, drugi = it -> second;
            int distanca = prvi - drugi + 2;                                             //ukljucujem oba kraja
            if( distanca > max_distanca) max_distanca = distanca;
        }
    }
    
    cout << max_distanca << '\n';
    return 0;
}
