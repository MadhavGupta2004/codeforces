#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
  long long n,k,x;
  cin>>n>>k>>x;
  long long totalsum= (n*(n+1))/2;
  long long ksum=((n-k)*(n-k+1))/2;
  long long maxi=totalsum-ksum;
  long long mini=(k*(k+1))/2;
  if(x>=mini && x<=maxi)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
   }
}