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
string s;
cin>>s;
string ans="";
bool flag=true;
int a=s[1]-48;
a+=(s[0]-48)*10;
if(a>12){
    if(a<22){
        ans+='0';
        ans+=to_string(a-12);
    }
    else{
        ans+=to_string(a-12);
    }
    flag=false;
}
else{
    if(a==0){
        ans+="12";
    }
    else{
    if(a<10){
        ans+='0';
        ans+=to_string(a);
    }
    else{
        ans+=to_string(a);
    }  
    }
    if(a==12)flag=false;
}
ans+=':';
ans+=s[3];
ans+=s[4];
ans+=' ';
if(flag==true){
ans+="AM";
}
else{
    ans+="PM";
}
cout<<ans<<endl;
}
}