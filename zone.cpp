#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main(){
    int n; cin >> n;
    
    vector<double> zone(n);
    for(int i = 0; i < n; i++)
        cin >> zone[i];
    
    partial_sum(zone.begin(), zone.end(), zone.begin());
    
    int m; cin >> m;
    while(m--){
        double x,y; cin >> x >> y;
        double d = sqrt(x*x+y*y);
        auto it = lower_bound(zone.begin(), zone.end(), d);
        
        if(it == zone.end())
            cout << "Izvan\n";
          else cout << distance(zone.begin(), it) << '\n';
    }
    return 0;
}
