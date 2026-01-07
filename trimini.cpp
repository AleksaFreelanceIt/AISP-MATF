#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> tabla;
char slovo;
void popuni(int poc_i, int poc_j, int n, int i, int j){
    if(n==1)  return;
    int pola = n/2;
    int ci = poc_i + pola - 1;
    int cj = poc_j + pola - 1;
    
    bool gl = i <= ci && j <= cj;
    bool dl = i > ci && j <= cj;
    bool gd = i <= ci && j > cj;
    bool dd = i > ci && j > cj;
    
    if(!gl)
        tabla[ci][cj] = slovo;
    if(!dl)
        tabla[ci+1][cj] = slovo;
    if(!gd)
        tabla[ci][cj+1] = slovo;
    if(!dd)
        tabla[ci+1][cj+1] = slovo;
    slovo++;
    
    if(gl)
        popuni(poc_i, poc_j, pola, i, j);
    else
        popuni(poc_i, poc_j, pola, ci,cj);
    if(dl)
        popuni(poc_i + pola, poc_j, pola, i, j);
    else 
        popuni(poc_i + pola, poc_j, pola, ci+1,cj);
    if(gd)
        popuni(poc_i, poc_j + pola, pola, i, j);
    else
        popuni(poc_i, poc_j + pola, pola, ci, cj+1);
    if(dd)
        popuni(poc_i + pola, poc_j + pola, pola, i, j);
    else
        popuni(poc_i + pola, poc_j + pola, pola, ci+1, cj+1);
}     

int main(){
    int i, j; cin >> i >> j;
    
    tabla = vector<string> (8, "        ");
    slovo = 'a';
    
    popuni(0, 0, 8, i, j);
    for(string s : tabla)
        cout << s << '\n';
    return 0;
}
