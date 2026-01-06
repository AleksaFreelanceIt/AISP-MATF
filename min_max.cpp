#include <iostream>
#include <stack>

using namespace std;

int izvrsi(char c, int a, int b){
    if( c == 'm') return min(a,b);
    else return max(a,b);
}

int main(){
    string izraz; cin >> izraz;
    stack<char> operacije;
    stack<int> vrednosti;
    
    for(char c : izraz){
        if( c == 'm' || c == 'M')
            operacije.push(c);
        else if(isdigit(c))
            vrednosti.push(c-'0');
        else if( c == ')'){
            int b = vrednosti.top(); vrednosti.pop();
            int a = vrednosti.top(); vrednosti.pop();
            char op =  operacije.top(); operacije.pop();
            int rez = izvrsi(op,a,b);
            vrednosti.push(rez);
        }   
    }
    
    cout << vrednosti.top() << '\n';
    return 0;
}
