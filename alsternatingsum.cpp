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
   int sum1=0;
   int sum2=0;
   for(int i=0;i<n;i++){
    if(i%2==0)sum1+=v[i];
    else {
        sum2+=v[i]*-1;
    }
   }
   cout<<sum1+sum2<<endl;;


   }
}

