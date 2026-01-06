#include <iostream>
#include <set>

using namespace std;

int main(){
    int zbir,n; cin >> zbir >> n;
    set<int> skup;
    int broj, brojac = 0;
    while(n--){
       cin >> broj;
       if(skup.find(zbir-broj) != skup.end()) brojac++;
       skup.insert(broj);
    }
    
    cout << brojac << '\n';
    return 0;
}
