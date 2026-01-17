#include <iostream>

using namespace std;

int main(){
    int d1, d2, n; cin >> d1 >> d2 >> n;
    int leva_ivica, desna_ivica, d1_desno, donja_ivica, suma = 0;
    
    leva_ivica = n*(n-1)*d1/2;                                          //suma prvih n brojeva koji su deljivi sa d1
    d1_desno = d1 + 2*d2;                                              //za koliko se povecavaju elementi na desnoj ivici
    desna_ivica = n*(n-1)*d1_desno/2;                             //suma desne ivice
    donja_ivica =  (2*n - 1) * (n - 1)*(d1 + d1_desno)/2;        // 2*n-1 broj elemenata u poslednjoj vrsti,  (n-1)*d1 i (n-1)*stepen_desno su granice 
    
    suma = leva_ivica + desna_ivica + donja_ivica;
    suma -= (n - 1)*(d1 + d1_desno);                               //Oduzima se jer su spicevi trougla dva puta dodati
    
    cout << suma << '\n';
    return 0;
}
