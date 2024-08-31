#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      long long a,b,n;
      cin>>a>>b>>n;
      vector<long long> v(n);
      for(long long i=0;i<n;i++){
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      long long sum=b;
      for(long long i=0;i<n;i++){
        sum+=min(a-1,v[i]);
    
      }
      cout<<sum<<endl;

    }
   
}