#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
if(s.size()<=2){
    cout<<"NO"<<endl;
}
else if(s[2]=='0')cout<<"NO"<<endl;
else if(s[0]=='1'&& s[1]=='0'){
if(s.size()==3){
    if(s[2]>='2')cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
else cout<<"NO"<<endl;


}
}

