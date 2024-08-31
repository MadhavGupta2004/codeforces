#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n,k;
 cin>>n>>k;
 vector<int> v(n+1);
 for(int i=1;i<=n;i++){
    cin>>v[i];
 }
 int count=0;
 for(int i=1;i<=k;i++){
   if(v[i]>0)count++;
 }
 for(int i=k+1;i<=n;i++){
    if(v[i]==v[k] && v[i]>0)count++;
    else break;
 }
 cout<<count<<endl;
}