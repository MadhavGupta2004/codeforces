#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> permutation(n);

        int left = 1;
        int right = n;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                permutation[i] = left++;
            } else {
                permutation[i] = right--;
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
