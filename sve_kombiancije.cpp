#include <iostream>
#include <vector>

using namespace std;
void ispisi(vector<int>&niz){
    for(int broj : niz)
        cout << broj << " ";
    cout << '\n';
}
void generisi_kombinacije(int i, vector<int>& niz, int n){
    int k = niz.size();
    if(i == k){
        ispisi(niz);
        return;
    }
    int prvi = i == 0 ? 1 : niz[i-1] + 1;
    int poslednji = n - (k-i-1);
    for(int vr = prvi; vr<= poslednji; vr++){
        niz[i] = vr;
        generisi_kombinacije(i+1, niz, n);
    }
}

int main(){
    int k, n;
    cin >> k >> n;
    vector<int> niz(k);
    generisi_kombinacije(0, niz, n);

    return 0;
}
