#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
cin>>n;
vector<int> v(n);
unordered_map<int,int> mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
if(mp.size()>2){
    cout<<"NO"<<endl;
}
else{
    bool flag=true;
    for(auto p:mp){
        if(p.second<(n)/2){
            flag=false;
        }
    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
}