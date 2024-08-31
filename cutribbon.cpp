#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v(3);
  cin>>v[0];
  cin>>v[1];
  cin>>v[2];
  sort(v.begin(),v.end());
  int count=0;
  if(v[0]<=n){
    count++;
    n-=v[0];
    if(v[1]<=n){
    count++;
    n-=v[1];
    if(v[2]<=n){
    count++;
    n-=v[2]; 
    }
    }
  }
  cout<<count<<endl;
}