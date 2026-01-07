#include <iostream>
#include <vector>

using namespace std;

int quickselect(int l, int d, int k, vector<int>& niz){
    int j = l;
    for(int i = l+1; i <= d; i++)
        if(niz[i] <= niz[l])
            swap(niz[++j], niz[i]);
    swap(niz[l],niz[j]);
    
    if(k < j)
        return quickselect(l, j - 1, k, niz);
    if(k > j)
        return quickselect(j+1, d, k, niz);
    return niz[k];   
}

int main(){
      int n, k; cin >> n >> k;
      vector<int> niz(n);
      for(int i = 0; i < n; i++){
          cin >> niz[i];
      }
      
      cout << quickselect(0, n-1, k, niz) << '\n';
      return 0;
}
