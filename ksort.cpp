#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
int n;
while(t--){
vector<int> v(n);
cin>>n;
for(int i=0;i<n;i++){
    // cin>>v[i];
    int x;
    cin>>x;
    v[i]=x;
}
int count=0;
for(int i=0;i<n-1;i++){
if(v[i]>v[i+1]){
    count++;
    v[i+1]=v[i];
}
}
if(count==0)cout<<0<<endl;
else cout<<count+1<<endl;
}

}