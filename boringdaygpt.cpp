#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
         
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int count = 0;
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            if (v[i] >= l && v[i] <= r) {
                count++;
                sum = 0;
            } else if (v[i] < l) {
                sum += v[i];
                if (sum >= l && sum <= r) {
                    count++;
                    sum = 0;
                }
            } else {
                sum = 0;
            }
        }

        cout << count << endl;
    }
    return 0;
}
