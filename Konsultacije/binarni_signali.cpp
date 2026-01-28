#include <iostream>
#include <vector>

using namespace std;

int obrada_signala(const vector<int>& signal){
    const int n = signal.size();
    int brojac = 0;
    
    int paran = 0, neparan = 0;
    for(int i = 0; i < n; i++){
        if(signal[i] == 0)
            paran++;
        else{
            int temp = paran;
            paran = neparan;
            neparan = temp + 1;
        }
        brojac += neparan;
    }
    return brojac;
}

int main(){
    int n; cin >> n;
    vector<int> signal(n);

    for(int i = 0; i < n; i++)
        cin >> signal[i];
    
    cout << obrada_signala(signal) << '\n';
    return 0;
}
