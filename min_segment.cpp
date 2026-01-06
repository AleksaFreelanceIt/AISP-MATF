#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, broj; cin >> n;
    set<int> prefiksi;
    prefiksi.insert(0);
    int prefiks, min = -1;
    
    while(n--){
        cin >> broj;
        prefiks += broj;
        auto it = prefiksi.upper_bound(prefiks);
        if(it != prefiksi.begin()){
            it--;
            int p = *it;
            if(min == -1 || prefiks - p < min) min = prefiks - p;
        }
        prefiksi.insert(prefiks);
    }
    
    cout << min << '\n'; 
    return 0;
}
