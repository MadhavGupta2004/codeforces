#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
int maxi=INT_MIN;
int maxio=INT_MIN;
int minio=INT_MAX;
int mini=INT_MAX;
for(int i=0;i<n;i++){
cin>>v[i];
if(v[i]<=minio){
    mini=i;
    minio=v[i];
}
if(v[i]>=maxio){
    if(maxio==v[i]){
        continue;
    }
    maxi=i;
    maxio=v[i];
}
}
if(mini<maxi){
    cout<<(n-mini-1)+(maxi)-1<<endl;
}
else{
    cout<<(n-mini-1)+(maxi)<<endl;
}
}