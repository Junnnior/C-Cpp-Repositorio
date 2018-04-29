#include <iostream>
#include <string.h>// import para usar o strlen
using namespace std;
int main() {
  char entrada[256];
  cin.getline(entrada,256);
  string dia, mes, ano;
  
  for(int i = 0; i<strlen(entrada);i++) { // pecorre a sting; 
    if(i<2) // separa dia 
      dia += entrada[i]; 
      
    else if(i>2 && i<5) // separa mês 
      mes += entrada[i];
      
    else if(i>5) // separa ano 
      ano += entrada[i];
  }
  // saídas - print
  cout<<mes<<"/"<<dia<<"/"<<ano<<endl;
  cout<<ano<<"/"<<mes<<"/"<<dia<<endl;
  cout<<dia<<"-"<<mes<<"-"<<ano<<endl;
  
  return 0; // retorna fim do run 
}