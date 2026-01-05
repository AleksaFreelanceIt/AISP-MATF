#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<string> ljudi(n);
    for(int i = 0; i < n; i++)
        cin >> ljudi[i];
    
    sort(ljudi.begin(), ljudi.end());
    int max_glasova = 1;
    int brojac = 1;
    for(int i = 1; i < n; i++){
        if(ljudi[i] == ljudi[i-1]) 
            brojac++;
        else
            brojac = 1;
         if(max_glasova < brojac) max_glasova = brojac;
    }
    
    cout << max_glasova << '\n';
    return 0;
}
