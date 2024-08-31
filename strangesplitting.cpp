#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n,t;
cin>>t;

while(t--){
    int y=-1;
bool flag=false; 
    cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
      if(y==-1)y=x;
  if(y!=x && flag==false){
    flag=true;
  }
}
if(flag==true){
    cout<<"YES"<<endl;
    string s="R";
    for(int i=1;i<n-1;i++){
        s+='B';
    }
    s+='R';
    cout<<s<<endl;
}
else cout<<"NO"<<endl;
}
}