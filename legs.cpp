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
   int sum=n/4;
   n-=(n/4)*4;
   sum+=n/2;
   cout<<sum<<endl;
}
}




