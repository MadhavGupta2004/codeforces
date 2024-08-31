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
long long n,k;
cin>>n>>k;
vector<long long> v(n);
long long pro=1;
for(int i=0;i<n;i++){
    long long x;
    cin>>x;
 v[i]=x;
pro=pro*v[i];
}
if(2023%pro!=0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    for(int i=1;i<k;i++){
        cout<<1<<" ";
    }
    cout<<2023/pro<<endl;
}
}
}
