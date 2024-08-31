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
int n,s,m;
cin>>n>>s>>m;
bool flag=false;
int og=0;
int maxdiffi=INT_MIN;
int sum=0;
int a,b=-1;
int lastb=0;
for(int i=0;i<n;i++){
cin>>a>>b;
 if(flag==false){
       flag=true;
       og=a;
 }
if(maxdiffi<(a-lastb)){
    maxdiffi=a-lastb;
}
sum+=b-a;
if(b!=-1)lastb=b;
}
maxdiffi=max(maxdiffi,m-b);
sum-=m;
sum*=-1;
if(sum>=s){
    if(og>=s)cout<<"YES"<<endl;
    else if(maxdiffi>=s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
} 
}