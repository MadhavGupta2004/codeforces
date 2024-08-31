#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n,x;
cin>>t;
while(t--){
cin>>n>>x;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int diff=INT_MIN;
for(int i=0;i<n-1;i++){
if(v[i+1]-v[i]>diff){
    diff=v[i+1]-v[i];
}
}
diff=max(diff,max(v[0],2*(x-v[n-1])));
cout<<diff<<endl;
}
}