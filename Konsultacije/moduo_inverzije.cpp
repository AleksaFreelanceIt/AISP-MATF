#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k, brojac = 0; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    cin >> k;
    
    for(int i = 0; i < n; i++)
        niz[i] %= k;
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(niz[i] > niz[j])
                brojac++;
          
    
    cout << brojac << '\n';
    return 0;
}
