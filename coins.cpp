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
if(n%2==0 || k==1)cout<<"YES"<<endl;
else if((n-k)%2==0 || n%k==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}



