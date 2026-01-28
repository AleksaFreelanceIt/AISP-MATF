#include <iostream>
#include <vector>

using namespace std;

static string boja = "ABCD";
bool dodeli_boje(int cvor, vector<char>& boje, vector<vector<int>>& graf){
    if(cvor == boje.size()){
        return true;
    }
    for(auto slovo : boja){
        bool dodeli = true;
        for(int sused : graf[cvor])
            if(boje[sused] == slovo)
                dodeli = false;
    
        if(dodeli){
            boje[cvor] = slovo;
            if(dodeli_boje(cvor+1, boje, graf))
                return true;
        }
    }
    return false;
}

void provera(vector<vector<int>>& graf){
    int n = graf.size();
    
    vector<char> kanali(n, ' ');
    if(dodeli_boje(0, kanali, graf)){
        cout << "DA\n";
        for(char slovo : kanali)
            cout << slovo << " ";
        cout << '\n';
    } else cout << "NE\n";
}

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>>graf(n);
    for(int i = 0; i < m; i++){
        int od_cvor, do_cvor; cin >> od_cvor >> do_cvor;
        
        graf[od_cvor-1].push_back(do_cvor-1);
        graf[do_cvor-1].push_back(od_cvor-1);
    }
    
    provera(graf);
    return 0;
}


