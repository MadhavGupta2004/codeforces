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
for(int i=0;i<n;i++){
    cin>>v[i];
}
if(v[0]==1){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

}
}