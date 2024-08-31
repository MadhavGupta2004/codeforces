#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
using namespace std;
int main(){
int n;
cin>>n;
unordered_map<string,int> mp;

while(n--){
    string s;
    cin>>s;
    mp[s]++;
}
string ans="";
int a=INT_MIN;
for(auto x:mp){
    if(a<x.second){
        a=x.second;
        ans=x.first;
    }
}
cout<<ans<<endl;
}