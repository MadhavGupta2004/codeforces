#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n;
string s;
cin>>t;
while(t--){
cin>>n;
cin>>s;
int i=0;
int zcount=0;
int ocount=0;
bool flag=false;
while(i<n){
    while(s[i]=='0'){
        i++;
        flag=true;
    }
    if(flag==true){
     zcount++;
     flag=false;
    }
    
    if(s[i]=='1'){
        ocount++;
    }
    i++;
}
if(zcount>=ocount){
    cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;


}
}