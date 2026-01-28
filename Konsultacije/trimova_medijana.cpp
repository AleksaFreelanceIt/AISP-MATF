#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, t; cin >> n >> t;
    int m = n - 2*t;
    int medium = (m+1)/2;
    int index = t+medium-1;
    vector<int> niz(n);
    for(int i = 0; i < n; i++) cin >> niz[i];
    
    nth_element(niz.begin(), niz.begin() + index, niz.end());
    
    cout << niz[index] << '\n';
    
    return 0;
}
