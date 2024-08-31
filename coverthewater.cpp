#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n;
string s;
cin>>t;
while(t--){
cin>>n;
cin>>s;
int i=0;
bool flag=false;
int count=0;
while(i<s.size()){
if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
flag=true;
break;
}
if(s[i]=='.')count++;
i++;
}
if(flag==true)cout<<2<<endl;
else cout<<count<<endl;

}
}