#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, zbir; cin >> n >> zbir;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    
    sort(niz.begin(), niz.end());
    
    int brojac = 0;
    for(int i = 0; i < n; i++){
        int x = zbir - niz[i];
        if(binary_search(niz.begin()+i+1, niz.end(), x))
            brojac++;
    }
    
    cout << brojac << '\n';
    return 0;
}
