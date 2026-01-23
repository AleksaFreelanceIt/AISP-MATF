#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k1, k2, broj; cin >> n >> k1 >> k2;
    vector<int> vrednosti, brojaci;
    for(int i = 0; i < n; i++){
        cin >> broj;
        if(!vrednosti.empty() && vrednosti.back() != broj){
            if(vrednosti.back() == 0 && brojaci.back() >= k1){
            vrednosti.pop_back();
            brojaci.pop_back();
            }
            else if(brojaci.back() >= k2){
            vrednosti.pop_back();
            brojaci.pop_back();
            }
        }
        if(!vrednosti.empty() && vrednosti.back() == broj)
            brojaci.back()++;
        else {
            brojaci.push_back(1);
            vrednosti.push_back(broj);
        }
    }
    if(vrednosti.back() == 0 && brojaci.back() >= k1){
        vrednosti.pop_back();
        brojaci.pop_back();
    }else if(brojaci.back() >= k2){
         vrednosti.pop_back();
         brojaci.pop_back();
    }
    n = vrednosti.size();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < brojaci[i];j++)
            cout << vrednosti[i] << " ";
    cout << '\n';
    return 0;
}
