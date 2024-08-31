#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
 int n;
 cin>>n;
 int ans=0;
 if(n<=10){
 ans+=n;
 }
 else if(n>10 && n<=100){
    ans+=9;
    ans+=n/10;
 }
 else if(n>100 && n<=1000){
    ans+=19;
    ans+=(n/100)-1;
 }
 else if(n>1000 && n<=10000){
    ans+=28;
    ans+=(n/1000)-1;
 }
 else if(n>10000 && n<=100000){
    ans+=37;
    ans+=(n/10000)-1;
 }
 else if(n>100000 && n<=1000000){
    ans+=46;
    ans+=(n/100000)-1;
 }
 cout<<ans<<endl;
 }
 
  }




