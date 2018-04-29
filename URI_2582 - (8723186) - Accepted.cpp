#include <iostream>

using namespace std; 
int main() {
  int vezes, n1, n2, i, musica;
  cin >> vezes;
  for(i = 0; i < vezes; i++){
    cin >> n1 >> n2;
    musica = n1 + n2;
    
    if (musica == 0)
    cout << "PROXYCITY"<<endl;
    
    if (musica == 1)
    cout << "P.Y.N.G."<<endl;
    
    if (musica == 2)
    cout << "DNSUEY!"<<endl;
    
    if (musica == 3)
    cout << "SERVERS"<<endl;
    
    if (musica == 4)
    cout << "HOST!"<<endl;
    
    if (musica == 5)
    cout << "CRIPTONIZE"<<endl;
    
    if (musica == 6)
    cout << "OFFLINE DAY"<<endl;
    
    if (musica == 7)
    cout << "SALT"<<endl;
    
    if (musica == 8)
    cout << "ANSWER!"<<endl;
    
    if (musica == 9)
    cout << "RAR?"<<endl;
    
    if (musica == 10)
    cout << "WIFI ANTENNAS"<<endl;
  }
return 0;  
}