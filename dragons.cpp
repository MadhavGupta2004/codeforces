#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int n,s;
cin>>s>>n;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
v[i]={x,y};
}
sort(v.begin(),v.end());
bool flag=true;
for(int i=0;i<n;i++){
if(s>v[i].first){
    s+=v[i].second;
}
else{
flag=false;
cout<<"NO"<<endl;
break;
}
}
if(flag)cout<<"YES"<<endl;
}




