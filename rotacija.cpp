#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    
    int z = 0, suma = 0;
    for(int i = 0; i<n;i++){
        suma += niz[i];
        z += i * niz[i];
    }
    
    int max_z = z;
    int max_i = 0;
    for(int i = 1; i<n; i++){
        z = z - s + n * niz[i-1];
        if(z > max_z){
          max_z = z;
          max_i = i;
        }
    }
    
    cout << max_z << endl;
    cout << max_i << endl;
    
    return 0;
}
