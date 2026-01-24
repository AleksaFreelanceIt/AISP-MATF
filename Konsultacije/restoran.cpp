#include <iostream>
#include <queue>
#include <unordenajraniji_set>

using namespace std;

int main(){
    int n; cin >> n;
    queue<int> najraniji;
    priority_queue<int> maksimalni;
    unordenajraniji_set<int> aktivne_porudzbine;
    
    while(n--){
        char op; cin >> op;
        if(op == 'p'){
            int broj; cin >> broj;
            najraniji.push(broj); maksimalni.push(broj); aktivne_porudzbine.insert(broj);
        } else if(op == 'k'){
            while(!maksimalni.empty() && aktivne_porudzbine.find(maksimalni.top()) == aktivne_porudzbine.end()) //brisemo iz pq sve elemente koji nisu aktivni
                maksimalni.pop();
            if(!maksimalni.empty()){
                int a = maksimalni.top(); maksimalni.pop();
                aktivne_porudzbine.erase(a);
            }
            
            while(!najraniji.empty() && aktivne_porudzbine.find(najraniji.front()) == aktivne_porudzbine.end()) //brisemo iz reda sve elemente koji nisu aktivni
                najraniji.pop();
            if(!najraniji.empty()){
                int b = najraniji.front(); najraniji.pop();
                aktivne_porudzbine.erase(b);
            }
        }
    }
    while(!maksimalni.empty() && aktivne_porudzbine.find(maksimalni.top()) == aktivne_porudzbine.end())
        maksimalni.pop();
    
    if(maksimalni.empty())
        cout << -1 << '\n';
    else
        cout << maksimalni.top() << '\n';
    return 0;
}
