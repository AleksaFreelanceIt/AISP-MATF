#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    cin >> k;
    
    sort(niz.begin(), niz.end());
    
    for(int i = 0; i < k; i++){
        int a, b; cin >> a >> b;
        auto it_min = lower_bound(niz.begin(), niz.end(), a);
        auto it_max = upper_bound(niz.begin(), niz.end(), b);
        
        if(it_min < it_max)
            cout << *it_min << " " << *(it_max-1) <<'\n';
        else
            cout << "NEMA\n";
    }
    
    return 0;
}
