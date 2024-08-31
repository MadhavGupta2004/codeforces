#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
string s;
cin>>s;
string ans="";
int i=0;
bool front=false;
bool middle=false;
bool rear=false;
while(i<s.size()){
if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
if(middle==true){
    ans+=' ';
    middle=false;
}
if(front==false)front=true;
i+=3;
continue;
}
else{
    middle=true;
    ans+=s[i];
    i++;

}
}
cout<<ans<<endl;



}