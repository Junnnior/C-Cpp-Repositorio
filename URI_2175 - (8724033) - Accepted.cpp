#include <iostream>
using namespace std;
int main() {
  double o, b, i;
  cin >> o >> b >> i;
  
  if(o==i || b == i or b ==o)
    cout << "Empate"<<endl;
      
  if(o<b && o<i)
    cout << "Otavio"<<endl;
  
  if(b<o && b<i)
    cout<<"Bruno"<<endl;
  
  if(i<o && i<b)
    cout <<"Ian"<<endl;
  
return 0;
}
