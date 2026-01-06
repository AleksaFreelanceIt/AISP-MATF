#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    queue<int> q2, q3, q5;
    q2.push(2);
    q3.push(3);
    q5.push(5);
    
    int t = 1;
    while(n--){
        t = min({ q2.front(), q3.front(), q5.front() });
        q2.push(2*t);
        q3.push(3*t);
        q5.push(5*t);
        
        if(q2.front() == t) q2.pop();
        if(q3.front() == t) q3.pop();
        if(q5.front() == t) q5.pop();
    }
        
    cout << t << '\n';
    return 0;
}
