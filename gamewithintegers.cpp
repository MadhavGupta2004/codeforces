#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
cin>>n;
if(n%3==0){
    cout<<"Second"<<endl;
}
else{
    cout<<"First"<<endl;
}
}
}