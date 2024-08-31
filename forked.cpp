#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2)
        {
            if (a == 1)
            {
                count += abs(y1 - y2);
            }
            else
            {
                count += abs(y1 - y2) + 1;
            }
        }
        else if (y1 == y2)
        {
            if (b == 1)
            {
                count += abs(x1 - x2);
            }
            else
            {
                count += abs(x1 - x2) + 1;
            }
        }
        else
        {
            count += abs(x1 - x2) + abs(y1 - y2);
        }
        cout << count << endl;
    }
    return 0;
}
