#include <iostream>
#include <cstdint>

using namespace std;

void grej(int n, uint32_t k){
    if(n==0)
        return;
    
    if(k< (1<<(n-1))){                                  //1<<(n-1) shiftujemo jedinicu za n-1 mesta i ispadne 2^(n-1)
        cout << 0;
        grej(n-1, k);
    } else {
        cout << 1;
        grej(n-1, (1<<n)-1-k);
    }
}

int main(){
    int n; uint32_t k; cin >> n >> k;
    grej(n,k);
    return 0;
}
