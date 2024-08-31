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
char ch=s[0];
string ans="";
ans+=ch;
for(int i=1;i<s.size()-1;i++){
if(s[i]==ch){
    ch=s[i+1];
    ans+=ch;
    i++;
}
}
cout<<ans<<endl;
}
}