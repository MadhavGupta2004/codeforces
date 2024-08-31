#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
string a,b,c;
cin>>a>>b>>c;
unordered_map<char,int> mp;
unordered_map<char,int> mp2;
for(int i=0;i<a.size();i++){
    mp[a[i]]++;
}
for(int i=0;i<b.size();i++){
    mp[b[i]]++;
}
for(int i=0;i<c.size();i++){
    mp2[c[i]]++;
}
if(mp2==mp){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}