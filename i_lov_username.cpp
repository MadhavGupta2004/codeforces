#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
int ans=0;
int maxi=0;
int mini=0;
if(n==1){
    cout<<0<<endl;
}
else{
    if(v[1]>v[0]){
        ans++;
        maxi=v[1];
        mini=v[0];
    }
    else if(v[1]<v[0]){
        ans++;
        mini=v[1];
        maxi=v[0];
    }
    else{
        maxi=v[1];
        mini=v[1];
    }
    for(int i=2;i<n;i++){
        if(v[i]>maxi){
            ans++;
            maxi=v[i];
        }
        if(v[i]<mini){
            ans++;
            mini=v[i];
        }
    }
    cout<<ans<<endl;

}
}