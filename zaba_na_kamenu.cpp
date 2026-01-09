#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, r; cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    cin >> r;
    
    int i = 0, j = 0, k = 0;
    while(i != n-1){
        while( j < n && niz[j] - niz[i] <= r)
            j++;
        j--;
        if( i ==j){
            cout << -1 << '\n';
            return 0;
        }
        k++;
        i = j;
        }
    cout << k << '\n';
    return 0;
}
