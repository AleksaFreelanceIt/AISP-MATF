#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool sudoku(int pos, vector<string>& s){
    int n = s.size();
    int i = pos / n, j = pos % n;
    
    if(pos == n*n) return true;
    
    if(s[i][j] != '0')
        return sudoku(pos+1, s);
        
    for( char c = '1'; c<= '9'; c++){
        s[i][j] = c;
        if(provera(i, j, s) && sudoku( pos+1,s)) return true; 
    }
    
}

int main(){
    int n; cin << n;
    vector<string> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];
    
    return 0;
}
