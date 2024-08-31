#include <iostream>
using namespace std;
 
int main() {
    int t; 
    cin >> t;    while (t--) { // Loop for each test case
        int n, s, m;
        cin >> n >> s >> m;
        int l[n];
        int r[n];
        for(int i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
        }
 
               if (s > m) {
            cout << "NO" << endl;
        } else if (l[0] >= s || m - r[n-1] >= s) {
            cout << "YES" << endl;
        } else {
            bool found = false; 
            for (int i = 0; i < n - 1; i++) {
                if (l[i + 1] - r[i] >= s) {
                    cout << "YES" << endl;
                    found = true;
                    break; 
                }
            }
            if (!found) {
                cout << "NO" << endl;
            }
        }
    }
    return 0; 
}