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
int a,b,c,d;
cin>>a>>b>>c>>d;
if(((b>d && b<c) && (a<c || a>d)) ||(a>c && (b>d || b<c)) || ((b<d && b>c) && (a<c || a>d))){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}
}




