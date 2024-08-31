#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        set<int> mexCandidates;
        vector<int> largestMex(n, 0);
        
        for (int i = 0; i < n; ++i) {
            int l;
            cin >> l;
            vector<int> seq(l);
            for (int j = 0; j < l; ++j) {
                cin >> seq[j];
            }
            sort(seq.begin(), seq.end());
            seq.erase(unique(seq.begin(), seq.end()), seq.end());
            
            int mex = 0;
            for (int x : seq) {
                if (x == mex) {
                    mex++;
                } else if (x > mex) {
                    break;
                }
            }
            largestMex[i] = mex;
            mexCandidates.insert(mex);
        }
        
        vector<int> mexList(m + 1, 0);
        
        for (int i = 0; i <= m; ++i) {
            mexList[i] = mexCandidates.upper_bound(i) == mexCandidates.end() ? i : *mexCandidates.upper_bound(i);
        }
        
        long long sumF = 0;
        for (int i = 0; i <= m; ++i) {
            sumF += mexList[i];
        }
        
        cout << sumF << endl;
    }
    
    return 0;
}
