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
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int> t(n+2,0);
t[v[0]]=1;
bool flag=true;
for(int i=1;i<n;i++){
if(t[v[i]+1]==0 && t[v[i]-1]==0){
flag=false;
break;
}
else{
    t[v[i]]=1;
}
}
if(flag==true)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}



