#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,string>> takmicari(n);
    for(int i = 0; i < n; i++){
        cin >> takmicari[i].second >> takmicari[i].first;
        takmicari[i].first *= -1;
    }
    
    sort(takmicari.begin(), takmicari.end());
    
    for(pair<int, string> takmicar : takmicari)
        cout << takmicar.second << " " << -takmicar.first << '\n';
    
    return 0;
}
