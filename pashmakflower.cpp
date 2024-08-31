#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
long long nCr(int n, int r) {
    if (r > n - r) r = n - r; 
    long long res = 1;
    for (int i = 0; i < r; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int main(){
int n;
cin>>n;
unordered_map<int,int> mp;
vector<int> v(n);
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    mp[x]++;
    v[i]=x;
}
sort(v.begin(),v.end());
int maxdii=v[n-1]-v[0];
long long a=mp[v[0]];
long long b=mp[v[n-1]];
long long pro=a*b;
long long comb=nCr(mp[v[0]],2);
if(v[0]==v[n-1])cout<<maxdii<<" "<<comb<<endl;
else cout<<maxdii<<" "<<pro<<endl;
}




