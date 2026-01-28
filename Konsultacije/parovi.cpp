#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    int brojac = 0, L, R; cin >> L >> R;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int razlika = niz[j] - niz[i];
            if(L <= razlika && razlika <= R)
                brojac++;
        }
    }
    
    cout << brojac << '\n';
    return 0;
}
