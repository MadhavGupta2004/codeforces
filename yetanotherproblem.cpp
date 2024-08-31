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
    long long a,b;
    cin>>a>>b;
    if(abs(a-b)%10==0) cout<<abs(a-b)/10<<endl;
    else cout<<(abs(a-b)/10)+1<<endl;
  
}
}