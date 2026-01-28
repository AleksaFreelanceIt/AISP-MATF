#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    /*int q; cin >> q;
    bool stek = true, red = true;
    while(q--){
        int n; cin >> n;
        int temp = n;
        vector<int> niz;
        int br_izbacenih_kraj = 0;
        int br_izbacenih_pocetak = 0;
        while(n--){
            char operacija; int broj; cin >> operacija >> broj;
            if(operacija == 'i')
                niz.push_back(broj);
            else{
                if(niz.empty()){stek = red = false; cout << "impossible\n"; break;}
                auto it = find(niz.begin(), niz.end(), broj);
                if(it == (niz.end()-(1+br_izbacenih_kraj)) && it == (niz.begin()+br_izbacenih_pocetak)) continue;
                else if(it == (niz.begin()+br_izbacenih_pocetak)) {stek = false; br_izbacenih_pocetak++;}
                else if(it == (niz.end()-(1+br_izbacenih_kraj))){ red = false; br_izbacenih_kraj++;}
                else {stek = false; red = false; }
            }
            if(!stek && !red) {stek = red = false; cout << "impossible\n"; break;}
        }
        if(stek && red) cout << "not sure\n";
        else if(stek) cout << "stack\n";
        else if(red) cout << "queue\n";
        stek = red = true;
    }*/
    
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        stack<int> stek;
        queue<int> red;
        bool je_stek = true, je_red = true;
        while(n--){
            char operacija; int broj; cin >> operacija >> broj;
            if(operacija == 'i'){
                stek.push(broj);
                red.push(broj);
                continue;
            } else if(operacija == 'r'){
                if(stek.empty() || red.empty()) {je_stek = false; je_red = false; cout << "impossible\n"; break;} 
                int stek_broj = stek.top(); int red_broj = red.front();
                stek.pop(); red.pop();
                if(je_stek && stek_broj != broj) je_stek = false;
                if(je_red  && red_broj != broj) je_red = false;
                if(!je_stek && !je_red){je_stek = false; je_red = false; cout << "impossible\n"; break;}
            }
        }
        if(je_stek && je_red) cout << "not sure\n";
        else if(je_stek) cout << "stack\n";
        else if(je_red) cout << "queue\n";
    }
    
    return 0;
}
