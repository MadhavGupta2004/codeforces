#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    if (a.size() != b.size()) {
        cout << "NO" << endl;
        return 0;
    }

    if (a == b) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> mismatch_indices;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            mismatch_indices.push_back(i);
        }
    }

    if (mismatch_indices.size() != 2) {
        cout << "NO" << endl;
        return 0;
    }

    // Check if swapping the mismatched characters in 'a' makes it equal to 'b'
    swap(a[mismatch_indices[0]], a[mismatch_indices[1]]);
    if (a == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
