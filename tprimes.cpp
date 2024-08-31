#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>
using namespace std;
const int MAXN = 1000000;

vector<bool> sieve(MAXN + 1, true);
unordered_set<long long> t_primes;

void precompute_t_primes() {
    sieve[0] = sieve[1] = false; 
    for (long long i = 2; i <= MAXN; ++i) {
        if (sieve[i]) {
            t_primes.insert(i * i);
            for (long long j = i * i; j <= MAXN; j += i) {
                sieve[j] = false;
            }
        }
    }
}

int main() {
    precompute_t_primes();

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (t_primes.find(x) != t_primes.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
