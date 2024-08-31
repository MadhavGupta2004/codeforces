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
int n,k;
cin>>n>>k;
string s;
cin>>s;
unordered_map<char,int> mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int count=0;
for(auto p:mp){
    if(p.second%2!=0)count++;
}
if(k+1<count)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}

}
