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
int count=0;
for(int i=0;i<n-1;i++){
    if(v[i]%2==v[i+1]%2){
     count++;
    }
}
cout<<count<<endl;
 }
  }




