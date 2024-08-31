#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
 int n,a,b;
 cin>>n>>a>>b;
 if(n-a<=b){
    cout<<n-a<<endl;
 }
 else{
    cout<<b+1;
 }
}