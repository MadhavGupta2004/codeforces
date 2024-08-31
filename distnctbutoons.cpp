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
string s;
cin>>s;
string a="";
a+=s[0];
string b="";
for(int i=1;i<s.size();i++){
    if(s[i]!='0'){
        b+=s.substr(i);
        break;
    }
    else a+=s[i];
}
long long x=stoll(a);
long long y=0;
if(b!="")y=stoll(b);
if(y>x){
    cout<<x<<" "<<y<<endl;
}
else cout<<-1<<endl;
}
}
