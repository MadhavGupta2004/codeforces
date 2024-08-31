#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int k;
cin>>k;
while(k--){
int n,m;
cin>>n>>m;
string s;
cin>>s;
unordered_map<char,int> mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int count=0;
for(auto p:mp){
if(p.second<m)count+=m-p.second;
}
int x=mp.size();
count+=(7-x)*m;
cout<<count<<endl;




}
}