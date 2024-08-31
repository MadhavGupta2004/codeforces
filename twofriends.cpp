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
bool flag=false;
for(int i=0;i<n;i++){
   if(v[v[i]-1]==i+1){
    flag=true;
    cout<<2<<endl;
    break;
   }
}
if(flag==false)cout<<3<<endl;

}
}




