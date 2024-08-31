#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    bool flag=false;
    if(n%2!=0) cout<<"YES"<<endl;
    else{
 while(n>2){
    n=n/2;
  if(n%2!=0){
    flag=true;
    break;
  }
 }
    if(flag==false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
}
}