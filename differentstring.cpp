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
int count=1;
string s;
cin>>s;
for(int i=1;i<s.size();i++){
    if(s[0]!=s[i]){
        count++;
        swap(s[0],s[i]);
        break;
    }
}
if(count==2){
    cout<<"YES"<<endl;
    cout<<s<<endl;
}
else cout<<"NO"<<endl;

 
}
}




