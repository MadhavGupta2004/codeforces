#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
string s;
cin>>s;
vector<int> v;
for(int i=0;i<s.size();i++){
    if(s[i]!='+'){
        v.push_back(s[i]);
    }
}
sort(v.begin(),v.end());
string ans="";
for(int i=0;i<v.size()-1;i++){
    ans+=v[i];
    ans+='+';
}
ans+=v[v.size()-1];
cout<<ans<<endl;
}