#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long x=0;
            cin>>x;
            sum += x;
        }
        long long a = sqrt(sum);
        if (a * a == sum) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
