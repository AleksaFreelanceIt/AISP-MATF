#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;
    vector<tuple<int,string,int>> takmicari(n);
    for(int i = 0; i < n; i++){
        int bodovi; string ime;
        cin >> ime >> bodovi;
        takmicari[i] = {bodovi, ime, i};
    }
    
    sort(takmicari.rbegin(), takmicari.rend());
    vector<pair<string,int>> rang_lista(n);
    for(int i = 0; i<n;i++){
        rang_lista[get<2>(takmicari[i])] = {get<1>(takmicari[i]), i+1};
    }
    
    for(pair <string, int> takmicar: rang_lista)
        cout << takmicar.first << " " << takmicar.second << '\n';
    return 0;
}
