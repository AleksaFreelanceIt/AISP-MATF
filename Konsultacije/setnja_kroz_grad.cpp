#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    string putanja; cin >> putanja; // LRRUUBD
    stack<char> min_put;
    for(char put : putanja){
        if(put == 'B' && !min_put.empty())  min_put.pop();
        else if(put == 'L'){
            if(!min_put.empty() && min_put.top() == 'R'){
                min_put.pop();
            } else min_put.push(put);
        }else if(put == 'R'){
            if(!min_put.empty() && min_put.top() == 'L'){
                min_put.pop();
            }else min_put.push(put);
        }else if(put == 'D'){
            if(!min_put.empty() && min_put.top() == 'U'){
                min_put.pop();
            }else min_put.push(put);
        }else if(put == 'U'){
            if(!min_put.empty() && min_put.top() == 'D'){
                min_put.pop();
            }else min_put.push(put);
        }
    }
    
    putanja = "";
    while(!min_put.empty()){
        putanja += min_put.top();
        min_put.pop();
    }
    reverse(putanja.begin(), putanja.end());
    
    cout << putanja << '\n';
    return 0;
}
