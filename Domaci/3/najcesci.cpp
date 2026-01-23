#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, najcesci = -1, max_brojac = 0, brojac = 1; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    
    sort(niz.begin(), niz.end());
    for(int i = 1; i <= n; i++){
        if(i < n && niz[i] == niz[i-1])
            brojac++;
        else{
          if(brojac > n/2){
              max_brojac = brojac;
              najcesci = niz[i-1];
          }
          brojac = 1;
          }
    }
    
    cout << najcesci << '\n';
    return 0;
}
