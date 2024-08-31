#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
    cin>>n>>k;
     int x;
     bool flag=false;
    for(int i=0;i<n;i++){
       cin>>x;
       if(x==k && flag==false){
        flag=true;
       }
    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
}