 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 //Broj particija n ciji su svi sabirci manji ili jednaki od m
 /*int broj_particija(int n, int m){                        Neoptimizovani rekurzivni poziv
    if(n == 0) return 1;
    
    int broj = 0;
    if(n >= m) 
        broj += broj_particija(n-m,m);
    if(m >1)
        broj += broj_particija(n,m-1);
        
    return broj;
 }*/
 
 vector<vector<int>> memo;
  int broj_particija(int n, int m){                 //Optimizovaniji
    if(memo[n][m] != -1) return memo[n][m];
    if(n == 0) return memo[n][m] = 1;
    
    int broj = 0;
    if(n >= m) 
        broj += broj_particija(n-m,m);
    if(m >1)
        broj += broj_particija(n,m-1);
        
    return memo[n][m] = broj;
 }
 
 
 int main(){
    int n; cin >> n;
    memo =  vector<vector<int>>(n+1, vector<int>(n+1,-1));
    
    cout << broj_particija(n, n) << '\n';
    return 0;
 }
