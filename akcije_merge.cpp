#include <iostream>
#include <vector>

using namespace std;

int merge(int l, int d, vector<int>& niz, vector<int>&pom){
    int s = (l+d)/2;
    int i = l, j = s+1, k = l;
    int br = 0;
    while( i <= s && j <= d)
        if(niz[i] <= niz[j])
            pom[k++] = niz[i++];
        else{
            pom[k++] = niz[j++];
            br += i - l;
        }
    while( i <= s)
        pom[k++]  = niz[i++];
    while( j <= d){
        pom[k++] = niz[j++];
        br += i - l;            
    }
    for(int i = l; i <= d; i++){
        niz[i] = pom[i];
    }
    return br;
}
int akcija(int l, int d, vector<int>& niz, vector<int>& pom){
    int s = (l+d)/2;
    int brl = akcija(l, s, niz, pom);
    int brd = akcija(s+1, d, niz, pom);
    int br = merge(l, d, niz, pom);
    return br + brd + brl;
}

int main(){
    int n; cin >> n;
    vector<int> niz(n);
    vector<int> pom(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];
    
    cout << akcija(0, n-1, niz, pom) << '\n';
    return 0;
}
