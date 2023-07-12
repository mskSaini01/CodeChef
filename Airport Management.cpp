#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
	int t, n, res;
	cin >> t;
	while(t--) {
        res = 1;
        cin >> n;

        vector<int> a(n), d(n);
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        for(int i = 0; i < n; i++) {
            cin >> d[i];
            mp[d[i]]++;
        }

       for(auto x:mp) {
           res = max(res, x.second);
       }

        cout << res << endl;
	}
	return 0;
}
