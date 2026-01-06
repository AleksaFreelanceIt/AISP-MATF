#include <iostream>
#include <map>

using namespace std;

int vrednost(map<int, int>& mapa,int uvecanje, int broj){
    return mapa[broj] + uvecanje;
}

void postavi(map<int, int>& mapa,int uvecanje, int broj, int vrednost){
    mapa[broj] = vrednost - uvecanje;
}

void vrednost(map<int, int>& mapa, int broj){
    mapa.erase(broj);
}

void uvecaj(map<int, int>& mapa, int broj, int vrednost){
    mapa[broj] += vrednost;
}

void uvecaj_sve(map<int,int>& mapa, int& uvecanje, int vrednost){
    uvecanje += vrednost;
}

int main(){
    return 0;
}
