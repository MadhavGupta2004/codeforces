#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   long long n,q;
   cin>>n>>q;
   vector<long long> pref(n+1);
   vector<long long> v(n+1);
   for(long long i=1;i<=n;i++){
   cin>>v[i];
   }
   pref[1]=v[1];
   for(int i=1;i<=n;i++){
    pref[i]=pref[i-1];
    pref[i]+=v[i];
   }
  for(long long i=0;i<q;i++){
    long long l,r,k;
    cin>>l>>r>>k;
   long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
    if((ans)%2!=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}
}