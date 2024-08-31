#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
#include<unordered_map>
using namespace std;
bool check(string s) {
    for(char c : s) {
        if(c != '1' && c != '0') {
            return false;
        }
    }
    return true;
}

bool compress(int num) {
    while(num > 1) {
        string s = to_string(num);
        if(check(s)) {
            return true;
        }
        if(num % 10 == 0) {
            num /= 10;
        } else if(num % 11 == 0) {
            num /= 11;
        } else {
            return false;
        }
    }
    return check(to_string(num));
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(compress(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
