#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int i = 1, j = 2;
    int suma = i+j;
    int brojac = 0;
    while(1){
        if(( j > n/2 +1) || (i == j)) break;
        if(suma < n) {j++; suma += j;}
        else if(suma > n){suma -= i; i++;}
        else {brojac++; suma -= i; i++;}
    }
    cout << brojac << endl;
    
    return 0;
}
