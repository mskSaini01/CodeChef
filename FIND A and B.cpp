#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
	int t, x, y, z;
	cin>>t;
	while(t--) {
	    cin >> x >> y >> z;
	    if((x*y)%z == 0)
	        cout << x*y << " " << z << endl;
	    else if((z*y)%x == 0)
	        cout << z*y << " " << x << endl;
	    else if((x*z)%y == 0)
	        cout << x*z << " " << y << endl;
	    else
	        cout << "-1"<< endl;
	}
	
	return 0;
}
