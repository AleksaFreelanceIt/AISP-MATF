#include <iostream>
#include <limits>
#include <vector> 

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    int maks = numeric_limits<int>::min();
    for(int i = 0; i < n; i++){ 
        int broj; cin >> broj;  
        niz[i] = broj%2;                                                                                            //S obzirom da se gleda samo parnost broja nebitni su sami brojevi
    }
    
    int levi_parni = 0, desni_parni = 0, levi_neparni = 0, desni_neparni = 0;
    for(int broj : niz)
        if(broj) desni_neparni++;
        else desni_parni++;
        
    for(int podela = 0; podela < n; podela++){
        int trenutna_podela = levi_parni*desni_parni + levi_neparni*desni_neparni;    //Formula koja nam daje broj parova zadatih u zadatku
        if(trenutna_podela > maks) maks = trenutna_podela;                                      //Jer hocemo da uparimo parne sa parnim a neparne sa neparnim
        if(niz[podela]) {levi_neparni++; desni_neparni--;}
        else {levi_parni++; desni_parni--;}
    }
    
    cout << maks << '\n';
    return 0;
}
