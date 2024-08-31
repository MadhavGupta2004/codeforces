#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
void rightshift(vector<int>& v,int idx){
    int n=v.size();
    for(int i=n-1;i>idx;i--){
     v[i]=v[i-1];
    }
}
int main(){
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
  vector<int> v1(n);
  vector<int> v2(n);
  for(int i=0;i<n;i++){
    cin>>v1[i];
  }
  for(int i=0;i<n;i++){
    cin>>v2[i];
  }
  int ans=0;
  for(int i=0;i<n;i++){
    if(v1[i]>v2[i]){
      rightshift(v1,i);
      ans++;
      v1[i]=v2[i];
    }
  }
  cout<<ans<<endl;
}
}




