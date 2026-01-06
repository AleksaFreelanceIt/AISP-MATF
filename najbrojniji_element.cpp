#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, max_glasova = 0; cin>>n;
    map<string,int> glasovi;
    string ime;
    
    while(n--){
        cin >> ime;
        glasovi[ime]++;
    }
    for(auto x : glasovi){
        if(x.second > max_glasova)
            max_glasova = x.second;
    }
    cout<< max_glasova << '\n';
    return 0;
}
