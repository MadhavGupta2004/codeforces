#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
using namespace std;
inline void learn_code_solve() {
    string s = "asdlwqecazxsd";
    string t = "klojiucmnhjkspoiy";
    int m = 15, n = 14;
    int dp[m + 1][n + 1];
    
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) dp[i][j] = 0;
            else if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    string ans;
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (s[i - 1] == t[j - 1]) {
            ans.push_back(s[i - 1]);
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) i--;
        else j--;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin>>s;
//         int a=0;
//         int b=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='A')a++;
//             else b++;
//         }
//         if(a>b)cout<<'A'<<endl;
//         else cout<<'B'<<endl;
  
// }
learn_code_solve();
}
