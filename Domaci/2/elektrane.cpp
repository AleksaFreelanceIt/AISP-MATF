#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main(){
    int R, n; cin >> R >> n;
    vector<int> elektrana(n);
    for(int i = 0; i < n; i++)
        cin >> elektrana[i];
    
    int prvi = numeric_limits<int>::max(), drugi = 0, treci = 0;
    sort(elektrana.begin(), elektrana.end());                                                                                    //sortiramo niz radi lakse provere dodatnih uslova
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++){                                                                                                     //j ne mora ici od pocetka jer su ti slucajevi pokriveni vec
                auto iterator = find(elektrana.begin(), elektrana.end(), R - elektrana[i] - elektrana[j]);
                if(iterator != elektrana.end()){                                                                                     //ako postoji element
                    if( prvi > elektrana[i]){                                                                                            //i ako je najmanji element manji od prvog dodeli ih
                    prvi = elektrana[i];
                    drugi = elektrana[j];
                    treci = *iterator;
                    } else if(prvi == elektrana[i] && drugi > elektrana[j]){                                                 //ukoliko je isti kao prvi a manji od drugog onda dodeli
                    prvi = elektrana[i];
                    drugi = elektrana[j];
                    treci = *iterator;
                    }
                }
            }
    
    cout << prvi << " " << drugi << " " << treci << '\n';
    return 0;
}
