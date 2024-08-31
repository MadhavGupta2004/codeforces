#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
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
  vector<int> dupli=v;
  sort(dupli.begin(),dupli.end());
  if(v==dupli)cout<<0<<endl;
  else{
    for(int i=0;i<dupli.size();i++){

    }
  }
}
}