#include <iostream>
using namespace std;
int main() {
  int minuto, a, b;
  
  cin >> minuto;
  cin >> a >> b;
  
  if (minuto >= a+b)
    cout <<"Farei hoje!"<<endl;
  else
    cout<<"Deixa para amanha!"<<endl;
  
  return 0;
}