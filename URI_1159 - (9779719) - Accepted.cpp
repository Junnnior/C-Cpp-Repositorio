#include <iostream>
using namespace std ;
int main() {
    int n;
    cin >>n;
    while (n != 0) {
	    int sum = 0; 
	    for (int i = n, k = 1; k<=5; i++) {
	        if (i % 2 == 0) {
	            sum += i ;
	            k ++ ;
	        }
	  }
	  cout << sum << endl;
	  cin >> n;
	}
	return 0;
}