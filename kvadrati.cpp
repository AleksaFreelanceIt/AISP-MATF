#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int zbir_kv(pair<int,int> par){
    return par.first * par.first + par.second*par.second;
}

bool vece(pair<int,int> x, pair<int,int>y){
    if(zbir_kv(x) < zbir_kv(y)) return false;
    else if( zbir_kv(x) > zbir_kv(y)) return true;
    else return x.first > y.first;
}

int main(){
    int n, k; cin >> n >> k;                                    //Metoda sa pq
    priority_queue<pair<int, int>, vector<pair<int,int>>, decltype(&vece)> pq(vece);
    
    for(int i = 0; i <= n; i++)
        pq.push({0,i});
  while(k--){
      auto trenutni = pq.top();
      pq.pop();
      if(trenutni.first < trenutni.second){
         pq.push({trenutni.first+1, trenutni.second}); 
      }
  }
  auto trenutni = pq.top();
  
  cout << trenutni.first << " " << trenutni.second << " " << zbir_kv(trenutni) << '\n';
   /* int n, k; cin >> n >> k;             Metoda sa sortiranjem
    vector<pair<int,int>> niz;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<=i; j++){
            niz.push_back({j,i});
        }
    }
    sort(niz.begin(), niz.end(), manje);


    cout << niz[k].first << " " << niz[k].second << " " << zbir_kv(niz[k]) << '\n';*/
    return 0;
}
