#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int a=-1;
for(int i=n-1;i>=0;i--){
  if(s[i]=='B'){
    a=i;
    break;
  }
}
int b=-1;
for(int i=0;i<s.size();i++){
if(s[i]=='B'){
    b=i;
    break;
  }
}
cout<<a-b+1<<endl;
}
}