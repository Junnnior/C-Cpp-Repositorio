#include <iostream>
using namespace std;

int main() {
  int horaI, minuI, horaF, minuF,  resu;
  
  while(free){
    cin >>horaI>>minuI>>horaF>>minuF;
    resu = ((horaF*60)+minuF)-((horaI*60)+minuI);
  
    if (resu<0){
      resu+=24*60;
    }
  
    if(resu ==0)
      break;
  
    cout <<resu<<endl;

  }
return 0;
}
