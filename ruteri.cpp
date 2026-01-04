#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];
    
    int suma = 0, z = 0;
    for(int i = 0; i<n; i++){
        s += a[i];
        z += i * a[i];
    }
    int levo = 0, desno = s;
    int min_z = z;
    int min_i = 0;
    for(int i = 1; i<n;i++){
        levo += a[i-1];
        desno -= a[i-1];
        z = z+levo-desno;
        if(z<min_z){
            min_z = z;
            min_i = i;
        }
    }
    
    

return 0;
}
