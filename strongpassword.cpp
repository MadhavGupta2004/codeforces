#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
char findDifferentChar(char ch1, char ch2) {
    for(char ch = 'a'; ch <= 'z'; ch++) {
        if(ch != ch1 && ch != ch2) {
            return ch;
        }
    }
    return 'a'; // Fallback (should never really happen)
}
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int maxi=0;
int x=0;
for(int i=0;i<s.size()-1;i++){
if(s[i]==s[i+1])x++;
else x=0;
if(x>maxi)maxi=x;
}
x=0;
string ans="";
for(int i=0;i<s.size()-1;i++){
if(s[i]==s[i+1]){
    x++;
}
else x=0;
 ans+=s[i];
if(x==maxi){
    ans+=findDifferentChar(s[i],s[i+1]);
    x=i;
    break;
}
}
for(int i=x+1;i<s.size();i++){
    ans+=s[i];
}
if(ans==""){
    ans+=s[0];
    ans+=findDifferentChar(s[0],s[0]);
}
 cout<<ans<<endl;


}
}