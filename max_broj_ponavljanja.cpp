#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    int max_broj = 0;
    int broj;
    set<int> skup;
    
    while(n--){
       cin >> broj;
       if(skup.find(broj) != skup.end()){
          if(broj > max_broj)
              max_broj = broj;
       } else skup.insert(broj);
    }
    
    if(!max_broj) cout << "nema\n";      //moze se proveriti i da li je skup.size() == n ako se ne menja n u petlji
    else cout << max_broj << '\n';
    return 0;
}
