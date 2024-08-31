#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int c=a/b;
    c++;
    if(a%b==0)cout<<0<<endl;
    else cout<<b*c-a<<endl;
}




}