#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
int n,k;
while(t--){
cin>>n>>k;
vector<int> v(k);
int noofones=0;
for(int i=0;i<k;i++){
    cin>>v[i];
    if(v[i]==1)noofones++;
}
sort(v.begin(),v.end());
int ans=0;
int m=noofones;
int x=k;
if(m==k){
    cout<<m-1<<endl;
}
else{
for(int i=0;i<x;i++){
    if(noofones==x-1)break;
    if(v[i]==1)continue;
    else {
     ans+=v[i]-1+v[i];
     noofones+=v[i];
     x+=v[i]-1;
    }
}
ans+=m;
cout<<ans<<endl;
}
}
}