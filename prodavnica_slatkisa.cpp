//Razlomljen ranac
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    int t, n; cin >> t >> n;
    vector<pair<double, double>> niz(n);
    for(int i = 0; i < n; i++){
        cin >> niz[i].first >> niz[i].second;
        niz[i].first /= niz[i].second;
    }
    sort(niz.rbegin(), niz.rend());
    
    double t_skupljeno = 0, vr_skupljeno = 0;
    for(int i = 0; i< n && t_skupljeno < t; i++){
        double kolicina = min(niz[i].second, t - t_skupljeno);
        t_skupljeno += kolicina;
        vr_skupljeno += kolicina * niz[i].first;
    }
    
    cout << vr_skupljeno << '\n';
    return 0;
}
