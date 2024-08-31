#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
int x;
cin>>x;
pair<int,int> p(i+1,x);
v[i]=p;
}
for(int i=0;i<n;i++){
if(v[i].second>m){
    pair<int,int> p(v[i].first,v[i].second-m);
   v.push_back(p);
   n++;
}
if(i==n-1){
    cout<<v[i].first;
}
}
}