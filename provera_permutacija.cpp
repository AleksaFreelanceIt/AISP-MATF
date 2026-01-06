#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, m, broj; cin >> n;
    multiset<int> a, b;
    while(n--){
        cin >> broj;
        a.insert(broj);
    }
    cin >> m;
    while(m--){
        cin >> broj;
        b.insert(broj);
    }
    
    if(a==b) cout << "da\n";
    else cout << "ne\n";
    return 0;
}
