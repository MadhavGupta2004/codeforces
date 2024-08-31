#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, l, r;
    vector<int> v;
    while (t--)
    {
        cin >> n >> l >> r;
        int count = 0;
        int sum = 0;
        v.clear();
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            v.push_back(m);
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] >= l && v[i] <= r)
            {
                count++;
                sum = 0;
            }
            else if (v[i] < l)
            {
                sum += v[i];
                if (sum >= l && sum <= r)
                {
                    count++;
                    sum = 0;
                }
            }
            else
            {
                sum = 0;
            }
        }
        cout << count << endl;
    }
}
