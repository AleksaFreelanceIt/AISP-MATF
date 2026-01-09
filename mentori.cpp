#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> mentor(n);
    for(int i = 0; i < n; i++)
        cin >> mentor[i];
    
    sort(mentor.begin(), mentor.end());
    int i = 0, j = 0;
    while(j < n){
        while(j < n && mentor[j] < 2*mentor[i])
            j++;
        if(i == n) break;
        j++;
        i++;
    }
    
    cout << i << '\n';
    return 0;
}
