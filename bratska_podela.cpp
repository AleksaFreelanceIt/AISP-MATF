#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

double podela(int i, double prvi, double drugi, vector<double>& niz){
    if(i == niz.size()) return abs(prvi - drugi);
    double raz_prvi =  podela(i+1, prvi + niz[i], drugi, niz);
    double raz_drugi = podela(i+1, prvi, drugi + niz[i], niz);
    return min(raz_prvi, raz_drugi);
}

int main(){
    int n; cin >> n;
    
    vector<double> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
        
    cout << fixed << setprecision(2);
    cout << podela(0,0,0,niz) << '\n';
    return 0;
}
