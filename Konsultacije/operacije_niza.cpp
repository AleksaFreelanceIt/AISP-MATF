#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> niz(n);
    vector<pair<pair<int, int>, int>> operacije(m);         //bolje koristiti tuple
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    for(int i = 0; i < m; i++)
        cin >> operacije[i].first.first >> operacije[i].first.second >> operacije[i].second;
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        int l = operacije[x].first.first, r = operacije[x].first.second, d = operacije[x].second;
        for(; l <= r; l++)
            niz[l] += d;
    }
    
    for(int broj : niz)1
        cout << broj << " ";
    cout << '\n';
    return 0;
}
