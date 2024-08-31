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
int mindiffi=INT_MAX;
for(int i=0;i<n-1;i++){
int diff=v[i+1]-v[i];
mindiffi=min(mindiffi,diff);
}
if(mindiffi<0)cout<<0<<endl;
else cout<<(mindiffi/2)+1<<endl;
}
}

