#include <iostream>
using namespace std;

int main()
{
    	
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
	int t, n;
	cin>>t;
	while(t--) {
	    cin >> n;
        
        string str;
        cin >> str;
        
        if (n % 3 == 1) {
            cout << "Yes\n";
            continue;
        }
        
        bool flag = false;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int beg_Idx = n + 1, end_Idx = -1;
            for (int i = 0; i < n; i++) {
                if (i % 3 == 0 && str[i] == ch) {
                    beg_Idx = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--) {
                int x = n - 1 - i;
                if (x % 3 == 0 && str[i] == ch) {
                    end_Idx = i;
                    break;
                }
            }

            if (beg_Idx < end_Idx) {
                flag = true;
                break;
            }
        }
        
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}