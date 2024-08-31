#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
string s;
cin>>s;
int count=0;
int n=s.size()-1;
bool flag=false;
for(int i=0;i<n;i++){
    if(s[i]==s[i+1]){
        count++;
    }
    else{
        count=0;
    }
    if(count==6){
        flag=true;
    }
}
if(s[n-1]==s[n-2]){
    if(count==6){
        flag=true;
    }
}
if(flag==true)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}