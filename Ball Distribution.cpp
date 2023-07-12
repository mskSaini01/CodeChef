#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
	int t, n, m;
	cin>>t;
	while(t--) {
	    cin >> n >> m;
        vector<int> ar(m);
        for(int i = 0; i < m; i++) { cin >> ar[i]; }
      
        int sum = 0;
        for(int i = 0; i < m; i++) {
            sum += (n-ar[i]);
        }
    
        cout << max(0, n-sum) << endl;
	}
	
	return 0;
}

