#include <iostream>

using namespace std;

int main(){
    int red; cin >> red;
    int trougao_reda = (red*red)*(red*red+1)/2;
    int manji_trougao = (red-1)*(red-1)*((red-1)*(red-1)+1)/2;
    cout << trougao_reda -  manji_trougao << endl;

    return 0;
}
