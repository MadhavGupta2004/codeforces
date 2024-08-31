#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
string s;
string t;
cin>>s>>t;
string m=s;
reverse(m.begin(),m.end());
if(m==t)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}