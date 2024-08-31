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
    long long n,k;
    cin>>n>>k;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    // if(v[0]==v[n-1])cout<<0<<endl;
    // if(v[0]+k>=v[n-1] && k!=0)cout<<0<<endl;
    // else{
    //    if(v[0]+k>=v[n-1]) v[0]+=k;
        for(long long i=0;i<n-1;i++){
            if(v[i]+k>=v[n-1])v[i]=v[n-1];
            else v[i]+=k;
        }
        long long suma=0;
        long long sumb=0;
        for(int i=0;i<n;i++){
            if(i%2==0)suma+=v[i];
            else sumb+=v[i];
        }
        cout<<abs(suma-sumb)<<endl;
    // }

   }
}

