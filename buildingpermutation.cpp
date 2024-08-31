#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
   long long n;
   cin>>n;
   vector<long long> v(n);
   for(long long i=0;i<n;i++){
    cin>>v[i];
   }
   vector<long long> dupli(n);
    for(long long i=0;i<n;i++){
    dupli[i]=i+1;
   }
   sort(v.begin(),v.end());
   long long count=0;
     for(long long i=0;i<n;i++){
    count+=abs(v[i]-dupli[i]);
   }
   cout<<count<<endl;
}