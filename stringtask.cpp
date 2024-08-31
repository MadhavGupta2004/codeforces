#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
string s;
cin>>s;
string ans="";
for(int i=0;i<s.size();i++){
    if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I' ||         s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
        continue;
    }
    else{
     ans+='.';
      if(s[i]>=65 && s[i]<=90){
        ans+=s[i]+32;
      }
      else{
        ans+=s[i];
      }
    }
}
cout<<ans<<endl;
}