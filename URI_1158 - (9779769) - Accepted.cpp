#include <iostream>
using namespace std ;
int main() {
	int n,x,y,j,total;
	cin >>n;
    for (int i = 0; i<n; i++) {
	    int sum = 0; 
	    cin>>x>>y;
	    for (j=x,total=0; total<y; j++) {
	        if (j % 2 != 0) {
	            sum += j ;
	            total ++ ;
	        }
	  }
	  cout << sum << endl;
	  
	}
	return 0;
}