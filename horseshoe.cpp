#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
unordered_map<int,int> mp;
mp[a]++;
mp[b]++;
mp[c]++;
mp[d]++;
int ans=0;
for(auto x:mp){
    if(x.second>1)ans+=x.second-1;
}
cout<<ans;
}