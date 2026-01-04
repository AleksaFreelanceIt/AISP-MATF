#include <iostream>

using namespace std;

int main(){
    int leva, desna, delilac; cin >> leva >> desna >> delilac;
    //Desna granica / delilac nam daje broj deljivih do desne granica, isto vazi i za levu, razlika ta dva nam daje broj deljivih u intervalu
    cout << (desna - (leva-1))/delilac<< endl;    
    return 0;
}
