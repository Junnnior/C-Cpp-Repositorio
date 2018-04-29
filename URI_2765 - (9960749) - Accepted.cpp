#include <iostream>
#include <string.h>// import para usar o strlen
using namespace std;
int main() {
  char entrada[256];
  cin.getline(entrada,256);
  
  for(int i = 0; i<strlen(entrada);i++) { // pecorre a sting; 14 = tamanho da mesma 
    if(entrada[i] == ','){ 
      cout<<endl; // quebra de linha 
    }else {
      cout<<entrada[i]; // sem quebra de linha 
    }
  }
  cout<<endl;
  return 0; // retorna fim do run 
}