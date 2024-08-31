#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
int a,b;
cin>>a>>b;
v[i]={a,b};
}
int countl=0;
int countr=0;
for(int i=0;i<n;i++){
    if(v[i].first==0)countl++;
    if(v[i].second==0)countr++;
}
countl=min(n-countl,countl);
countr=min(n-countr,countr);
countl+=countr;
cout<<countl<<endl;
}