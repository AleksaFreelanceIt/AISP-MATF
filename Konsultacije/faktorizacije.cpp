#include <iostream>
#include <vector>

using namespace std;

vector<int> niz;
void faktorizacije(int n, int pocetak){
    if(niz.size() > 1 && n < 2){
    for(int broj : niz)
        cout << broj << ' ';
    cout << '\n';
    }
    for(int i = pocetak; i <= n; i++){
        if(n % i == 0){
        niz.push_back(i);
        faktorizacije(n/i, i);
        niz.pop_back();
        }
    }
}

int main(){
    int broj; cin >> broj;
    bool prost = true;
    
    for(int i = 2; i*i < broj; i++)
        if(broj % i == 0){
            prost = false;
            break;
        }
    if(prost) cout << broj << '\n';
    else faktorizacije(broj, 2);
    
    return 0;
}
