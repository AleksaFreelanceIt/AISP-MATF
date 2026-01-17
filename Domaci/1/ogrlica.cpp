#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string ogrlica, rezultat = ""; cin >> ogrlica;
    int levo_plavo = 0, desno_plavo = 0;
    int n = ogrlica.size();
    float sredina = n*1.0/2;
    for(int i = 1; i < n; i++){                                       //Inicijalizacija vrednosti, nepamtimo zelene jer nam trazi samo o plavim da brinemo
        if(i > sredina){
            if(ogrlica[i] == 'P') levo_plavo++;
        }
        else if(i == sredina) continue;
        else if(i < sredina){
            if(ogrlica[i] == 'P') desno_plavo++;
        }
    }

    for(int i = 0; i < n; i++){ 
        if(levo_plavo > desno_plavo) rezultat += 'L';
        else if(levo_plavo == desno_plavo) rezultat += 'N';
        else rezultat += 'D';
                                                                                        //Ovde je bitno samo nacrtati sliku i pratiti indekse da sve bude u redu
        if(n%2 == 0){
            if(ogrlica[i] == 'P') levo_plavo++;
            if(ogrlica[(i+1)%n] == 'P') desno_plavo--;
            if(ogrlica[(i+n/2)%n] == 'P') desno_plavo++;
            if(ogrlica[((i+n/2)+1)%n] == 'P') levo_plavo--;
        } else{
            if(ogrlica[i] == 'P') levo_plavo++;
            if(ogrlica[(i+1)%n] == 'P') desno_plavo--;
            if(ogrlica[((i+n/2)+1)%n]  == 'P'){
                desno_plavo++;
                levo_plavo--;
            }
        }
    }
    
    cout << rezultat << '\n';
    return 0;
}
