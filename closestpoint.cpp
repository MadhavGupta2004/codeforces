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
   sort(v.begin(),v.end());
   if(n==2){
    if(v[0]+1==v[1]){
      cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }


}
}




