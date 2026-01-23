#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, p; cin >> n >> p;
    vector<int> visina(n);
    for(int i = 0; i < n; i++)
        cin >> visina[i];
    
    sort(visina.begin(), visina.end());
    int ukupni_pritisak = 0, i = 0, dubina = visina[0] + 1;  //ukupni pritisak, broj segmenata koji su potopljeni i pocetna dubina
    for(i = 0; i < n && visina[i] < dubina; i++){                //prolazimo kroz segmente dok su segmenti ispod vode 
        ukupni_pritisak += dubina - visina[i];
        if(ukupni_pritisak > p){cout << dubina-1 << '\n'; return 0;}  //u slucaju da smo vec prekoracili pritisak
    }
    
    
    while(1){                                                                                     //petlja za uvecavanje dubine
        dubina++;                                                                             
        ukupni_pritisak += i;                                                              //svaki put kad se uveca dubina dobije se 1 za svaki vec potopljen segment
        int j;
        for(j = i; j < n && visina[j] < dubina; j++){                                 //ista petlja kao i gore samo ide nadalje
            ukupni_pritisak += dubina - visina[j];
            if(ukupni_pritisak > p){ cout << dubina-1 << '\n'; return 0;}
        }
        if(ukupni_pritisak > p){ cout << dubina-1 << '\n'; return 0;}       //Provera za poslednji element
        i = j;
    }
    return 0;
}
