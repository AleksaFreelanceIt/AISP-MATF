#include <iostream>
#include <vector>

using namespace std;

int main(){
    int granica, n, broj; cin >> granica >> n;
    vector<int> vrednosti, brojac;                                                              //vector glumi stek
    
    while(n--){
        cin >> broj;
        if(!vrednosti.empty() && vrednosti.back() != broj && brojac.back() >= granica){
            vrednosti.pop_back();
            brojac.pop_back();
        }
        if(!vrednosti.empty() && vrednosti.back() == broj) 
            brojac.back()++;
        else {
            brojac.push_back(1);
            vrednosti.push_back(broj);
        }
    }
    
    if(!vrednosti.empty() && brojac.back() >= granica){
        vrednosti.pop_back();
        brojac.pop_back();
    }
    
    for(int i = 0; i < brojac.size();i++){
        while(brojac[i]--){
            cout << vrednosti[i]<< ' ';
        }
    }
    cout << '\n';
    return 0;
}
