#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
cin>>n>>k;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
if(k>=2){
    cout<<"YES"<<endl;
}
else{
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
}
}