#include <iostream>
#include <set>

using namespace std;

void dodaj(set<int>& skup, int broj){
    skup.insert(broj);
}

void brisi(set<int>& skup, int broj){
    auto it = skup.find(broj);
    if(it != skup.end())
        skup.erase(it);
}

void najblizi(set<int>& skup, int broj){
    auto it = skup.lower_bound(broj);
    if( it == skup.begin())
        return *it;
    if(it == skup.end()){
        it--;
        return *it;
    }
    int x = *it;
    it--; 
    int y = *it;
    if(x- broj <= broj - y)
        return x;
    return y;
}

int main(){
    
    return 0;
}
