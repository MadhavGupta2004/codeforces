#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    int odd;
    int even;
    if (n % 2 == 0)
    {
        odd = n / 2;
        even = n / 2;
    }
    else
    {
        odd = n / 2 + 1;
        even = n / 2;
    }
    if (odd < k)
    {
        k = k - even - 1;
        int i=2;
        for (i = 2; i <= n && k!=0; i += 2)
        {
            k--;
          
        }
      if(i-2)  cout << i-2 << endl;
      else cout<<i<<endl;
    }
    else
    {
        int i=1;
        for ( i = 1; i <= n && k!=0; i += 2)
        {
            
                 k--;
        }
        if(i-2)  cout << i-2 << endl;
      else cout<<i<<endl;
    }
}