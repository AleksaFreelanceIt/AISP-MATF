#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> grad(n), antena(m);
    for(int i = 0; i < n; i++) cin >> grad[i];
    for(int i = 0; i < m; i++) cin >> antena[i];
    
    sort(antena.begin(), antena.end());
    
    int precnik = 0;
    for(int i = 0; i < n; i++){
        auto it = lower_bound(antena.begin(), antena.end(), grad[i]);
        
        int dist = numeric_limits<int>::max();
        if(it != antena.begin()){
            dist = min(dist, grad[i] - *(it-1));
        }
        if(it != antena.end()){
            dist = min(dist, *it - grad[i]);
        }
        precnik = max(precnik, dist);
    }
    
    cout << precnik << '\n';
    return 0;
}
