#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++){
        cin >> niz[i];
    }
    
    sort(niz.begin(), niz.end());
    int max_duzina = 0;
    int duzina = 1;
    int kraj_niza;
    for(int i = 1; i < n; i++){
        if(niz[i] == niz[i-1] +1){
            duzina++;
        } else{
            duzina = 1;
        }
        if(duzina > max_duzina){
            kraj_niza = i;
            max_duzina = duzina;
        }
    }
    
    for(int i = kraj_niza - max_duzina +1; i <= kraj_niza; i++){
        cout << niz[i];
    }
    return 0;
}
