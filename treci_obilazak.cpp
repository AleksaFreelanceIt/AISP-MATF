#include <iostream>
#include <string>

using namespace std;

string kld, lkd; 
void ispisi_ldk(int  kld_p, int lkd_p, int n){
    if(n == 0) return;
    
    char koren = kld[kld_p];
    int koren_p = lkd.find(koren);
    int n_levo = koren_p - lkd_p;
    int n_desno = n - n_levo - 1;
    
    ispisi_ldk(kld_p + 1, lkd_p, n_levo);
    ispisi_ldk(kld_p + 1 + n_levo, koren_p + 1, n_desno);
    cout << koren;
}

int main(){
    cin >> kld >> lkd;
    ispisi_ldk(0, 0, kld.size());
    cout << '\n';
    return 0;
}
