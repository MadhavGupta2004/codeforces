#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
using namespace std;
int main(){
int n,m;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>m;
vector<int> b(m);
for(int i=0;i<m;i++){
    cin>>b[i];
}
int count=0;
int ans=-1;
for(int i=0;i<n;i++){
int j=m-1;
while(j>=0){
   if(b[j]%a[i]==0){
    if(b[j]/a[i]>ans){
      ans=b[j]/a[i];
      count=1;
      break;
    }
    else if(b[j]/a[i]==ans){
     count++;
     break;
    }
    else{
        j--;
    }
   }
     else{
        j--;
    }
}
}
cout<<count<<endl;
}