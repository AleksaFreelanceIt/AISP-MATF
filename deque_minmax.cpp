#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n,broj; cin >> n;
    deque<int> d;
    
    while(n--){
        cin >> broj;
        if(d.empty() || broj < d.front())
            d.push_front(broj);
        else
            d.push_back(broj);
    }
    
    while(!d.empty()){
        cout << d.front() << ' ';
        d.pop_front();
    }
    cout << '\n';
    return 0;
}
