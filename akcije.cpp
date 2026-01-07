#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;
tuple<int, int, int> akcija (int l, int d, vector<int>& niz){
    if(l >= d) return {0, niz[l], niz[l]};
    int s = (l+d)/2;
    int zl, minl, maxl, zd, mind, maxd;
    tie(zl, minl, maxl) = akcija(l, s, niz);
    tie(zd, mind, maxd) = akcija(s+1, d, niz);
    
    int zc = max({zl, zd, maxd - minl});
    int minc = min(minl, mind);
    int maxc = max(maxl, maxd);
    
    return {zc, minc, maxc};
}

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    
    int zc, maxc, minc;
    tie(zc, maxc, minc) = akcija(0, n-1, niz);
    cout << zc << '\n';
    return 0;
}
