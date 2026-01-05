#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int broj_jedinica = 0;
    
    //broj_jedinica =  __builtin_popcount(n);
    for(int i = 1; i < n; i*=2){
    broj_jedinica++;
    }
    
    if(broj_jedinca % 2 == 0) cout << '1' << '\n';
    else cout << '0' << '\n';
    // '\n' je brze od endl 
    return 0;
}
