#include <iostream>
#include <string>

using namespace std;

int main(){
    string rec; cin >> rec;
    
    int skor = 0, dubina = 0, n = rec.size();
    for(int i = 1; i < n; i++){
        if(rec[i-1] == '(' && rec[i] == '(') dubina++;
        if(rec[i-1] == ')' && rec[i] == ')') dubina--;
        if(rec[i-1] == '(' && rec[i] == ')') skor += (1<<dubina);
    }
    
    cout << skor << '\n';
    return 0;
}
