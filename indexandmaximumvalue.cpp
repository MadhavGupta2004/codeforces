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
long long n,m;
cin>>n>>m;
vector<long long> v(n);
for(long long i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
vector<long long> ans(m);
for(long long i=0;i<m;i++){
    char c;
    cin>>c;
    long long l,r;
    cin>>l>>r;
    if(v[n-1]>=l && v[n-1]<=r ){
        if(c=='+')v[n-1]+=1;
        else v[n-1]-=1;
    }
    ans[i]=v[n-1];
}
for(long long i=0;i<m;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;


}

}

