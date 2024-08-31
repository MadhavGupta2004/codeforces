#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    bool flag=true;
    string ans="";
    unordered_map<char,int> mp;
    if(s.size()%k==0){
   for(int i=0;i<s.size();i++){
      mp[s[i]]++;
    }
    for(auto p:mp){
        if(p.second<k){
            flag=false;
            break;
        }
        for(int i=0;i<(p.second)/k;i++){
            ans+=p.first;
        }
    }
    string m=ans;
    if(flag==true){
    for(int i=0;i<k-1;i++){
       ans+=m;
    }
    }
    }
    else{
        flag=false;
    }
    if(flag==false)cout<<-1<<endl;
    else cout<<ans<<endl;
}