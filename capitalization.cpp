#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
cin>>s;
int a=s[0];
if(a>=97 && a<=122)s[0]=a-32;
cout<<s<<endl;
}