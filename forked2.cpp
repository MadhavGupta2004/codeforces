#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
   int t;
   cin>>t;
   vector<int> v1={1,-1,-1,1};
   vector<int> v2={1,1,-1,-1};
   while(t--){
   int a,b,xk,yk,xq,yq;
   cin>>a>>b>>xk>>yk>>xq>>yq;
   set<pair<int,int>> s1,s2;
   for(int i=0;i<4;i++){
    s1.insert({xk+v1[i]*a,yk+v2[i]*b});
    s2.insert({xq+v1[i]*a,yq+v2[i]*b});
    s1.insert({xk+v1[i]*b,yk+v2[i]*a});
    s2.insert({xq+v1[i]*b,yq+v2[i]*a});
   }
   int count=0;
   for(auto p:s1){
    if(s2.find(p)!=s2.end())count++;
   }
   cout<<count<<endl;

   }
   
}