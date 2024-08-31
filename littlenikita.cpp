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
int a,b;
cin>>a>>b;
if(a==b)cout<<"YES"<<endl;
else if(a<b)cout<<"NO"<<endl;
else{
if((a-b)%2==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
}

