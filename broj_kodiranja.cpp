#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int64_t> memo;
int64_t broj_dekodiranja(int n, string& s){   //Memorizacija
    if(memo[n] != -1) return memo[n];
    if(n <= 1) return memo[n] = 1;
    
    int64_t brojac = 0;
    
    if(s[n-1] != '0')
        brojac += broj_dekodiranja(n-1, s);
    int dvocifreni = 10*(s[n-2] - '0') + (s[n-1] - '0');
    if(dvocifreni >= 10 && dvocifreni <= 26)
        brojac += broj_dekodiranja(n-2, s);
    
    return memo[n] = brojac;
}
/*int broj_dekodiranja(int n, string& s){ Rekurzivni nacin
    if(n <= 1) return 1;
    
    int brojac = 0;
    
    if(s[n-1] != '0')
        brojac += broj_dekodiranja(n-1, s);
    int dvocifreni = 10*(s[n-2] - '0') + (s[n-1] - '0');
    if(dvocifreni >= 10 && dvocifreni <= 26)
        brojac += broj_dekodiranja(n-2, s);
    
    return brojac;
}*/

int main(){
    string rec; cin >> rec;
    int n = rec.size();
    
    memo = vector<int>(n+1, -1);
    cout << broj_dekodiranja(n, rec) << '\n';
    return 0;
}
