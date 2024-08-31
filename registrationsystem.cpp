#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;
unordered_map<string,int> mp;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(mp.find(s)!=mp.end()){
       int count=mp[s];
       cout<<s+to_string(count)<<endl;
    }
    else{
         cout<<"OK"<<endl;
    }
      mp[s]++;
}
}