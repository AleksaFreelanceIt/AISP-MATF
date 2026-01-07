#include <iostream>
#include <vector>

using namespace std;

bool sledeca_kombinacija(vector<int>& niz , int n){
    int k = niz.size(), i;
    for(int i = k-1; i >= 0 && niz[i] == n; i--)
        n--;
    niz[i]++;
    if(i < 0) return false;
    for(i++; i < k; i++)
        niz[i] = niz[i-1] + 1;
    return true;
}
void ispisi(vector<int>& niz){
    for(int broj : niz)
        cout << broj << " ";
    cout << '\n';
}

int main(){
    int n, broj; cin >> n;
    vector<int> niz;
    while( cin >> broj)
        niz.push_back(broj);
    if(sledeca_kombinacija(niz, n))
        ispisi(niz);
    else
        cout << "-\n";
    return 0;
}
