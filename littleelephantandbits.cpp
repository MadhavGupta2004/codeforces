#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
int main() {
string s;
cin>>s;
string ans="";
bool flag=false;
for(int i=0;i<s.size();i++){
    if(s[i]=='0' && flag==false){
        flag=true;
    continue;
    }
    else{
        ans+=s[i];
    }

}
if(flag==false)cout<<ans.substr(0,ans.size()-1);
else cout<<ans<<endl;

}
