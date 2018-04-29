#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string normal;
  int a,b,vezes;
  
  cin>>vezes;
  for(int cont = 0; cont<vezes;cont++){
    cin>>a>>b;
    
    for(int i = a;i<=b;i++){
      normal+= to_string(a); 
      a ++;
    }
    
    cout<<normal; // string normal 
    reverse(normal.begin(), normal.end()); // inverte string
    cout<<normal<<endl; // string invertida 
    normal = ""; // limpa a string 
  }
  return 0;
}