#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> slova = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void ispisi_poruku(int broj, string& poruka){
    if(broj <= 0){
    cout << poruka << '\n';
    return;
    }
    int cifra = broj%10;
    for(char slovo : slova[cifra]){
        poruka.push_back(slovo);
        ispisi_poruku(broj/10, poruka);
        poruka.pop_back();
    }
}

int main(){
    string broj; cin >> broj;
    int r_broj = 0;
    for(int i = 0; i < broj.size(); i++)
        r_broj = r_broj * 10 + (broj[i] - '0');
        
    string poruka = "";
    ispisi_poruku(r_broj, poruka);
    return 0;
}
