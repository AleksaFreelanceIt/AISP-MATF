#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, neg_brojeva = 0, brojac = 0; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++){
        cin >> niz[i];
        if(niz[i] < 0) neg_brojeva++;
    }
    
    sort(niz.begin(), niz.end());
    int l = 0, d = n-1;
    while(l < d){
        if(niz[l] + niz[d] > 0){
            d--;
            brojac += neg_brojeva;
        } else {
            l++;
            neg_brojeva--;
        }
    }
    
    cout << brojac << '\n';
    return 0;
}
