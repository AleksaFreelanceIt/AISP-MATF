#include <iostream>

int main(){
    int n; cin >> n;
    int max_zbir = 0;
    vector<int> niz(n);
    
    for(int i = 0;i < n; i++){
        cin >> niz[i];
    }
    
    for(int i = 0; i<n;++){
        int zbir = 0,j;
        for(int j = i; j<n && zbir > 0;j++){
            zbir+= v[j];
            
            if(zbir >= max_zbir) max_zbir = zbir;
        }
        i = j;
    }
    
    cout << max_zbir << '\n';
    return 0;
}
