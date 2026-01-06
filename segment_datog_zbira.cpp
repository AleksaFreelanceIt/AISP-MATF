#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, z, broj; cin >> z >> n;
    unordered_map<int, int> broj_prefiksa;
    broj_prefiksa[0] = 1;
    int br = 0;
    int prefiks = 0;
    while(n--){
        cin >> broj;
        prefiks += broj;
        int p = prefiks - z;
        broj += broj_prefiksa[p];
        broj_prefiksa[prefiks]++;
    }
    
    cout << br << '\n';
    return 0;
}
