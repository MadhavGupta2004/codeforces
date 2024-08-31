#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<(n/2)-1<<" "<<1<<" "<<endl;
    }
    else{
        int x=n/2;
        if(x%2==0)cout<<x+1<<" "<<x-1<<" "<<1<<endl;
        else cout<<x<<" "<<x+1<<" "<<1<<endl;}}}