#include<iostream>

using namespace std;
int deljivi_u_intervalu(int pocetak, int kraj, int delilac){
    int l = pocetak%delilac == 0 ? pocetak/delilac : pocetak/delilac+1;
    int d = kraj/delilac;
    return d >= l ? d-l+1 : 0;
}
int main(){
    int n, brojac_R = 0, brojac_G = 0, brojac_B = 0; cin >> n;
    int x1, y1, x2,  y2; cin >> x1 >> y1 >> x2 >> y2;
    
    int leva_granica = x1*n+y1, desna_granica = x2*n+y2;
    brojac_R = brojac_G = brojac_B = deljivi_u_intervalu(leva_granica, desna_granica, 3);
    
    if(leva_granica % 3 == 1)                                                      
        brojac_G++;
    if(desna_granica % 3 == 0)
        brojac_G--;
    if(leva_granica % 3 >= 1)                                                
        brojac_B++;
    if(desna_granica % 3 <= 1)                                                                                       
        brojac_B--;
    
    cout << brojac_R << " " << brojac_G << " " << brojac_B << '\n';
    return 0;
}
