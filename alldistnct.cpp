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
unordered_map<int,int> mp;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
int even=0;
int odd=0;
for(auto p:mp){
    if(p.second%2==0)even++;
    else odd++;
}
if(even==0)cout<<odd<<endl;
else if(odd==0){
    if(even%2==0)cout<<even<<endl;
    else cout<<even-1<<endl;
}
else {
     if(even%2==0)cout<<even+odd<<endl;
    else cout<<even-1+odd<<endl;

}

}
}

