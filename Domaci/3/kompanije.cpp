#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n, suma = 0, brojac = 0; cin >> n;
    vector<int> prihod(n);
    for(int i = 0; i < n; i++){
        int broj; cin >> broj;
        prihod[i] = -broj;
        }
    priority_queue<int>rashod;
    
    for(int i = 0; i < n; i++){
        if(prihod[i] > 0) rashod.push(prihod[i]);
        suma += prihod[i];
        if(suma > 0){
            brojac++;
            suma -= rashod.top();
            rashod.pop();
        }
    }
    
    cout << brojac << '\n';
    return 0;
}
