#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, k, broj, zbir; cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0; i < k; i++){
        cin >> broj;
        pq.push(broj);
    }
    for(int i = k; i < n; i++){
        cin >> broj;
        pq.push(broj);
        pq.pop();                         //pq izbacuje najmanji element
    }
    
    while(!pq.empty()){
        zbir += pq.top();
        pq.pop();
    }
    
    cout << zbir << '\n';
    return 0;
}
