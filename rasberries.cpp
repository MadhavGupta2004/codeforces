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
int n,k;
cin>>n>>k;
vector<int> v(n);
bool flag=false;
for(int i=0;i<v.size();i++){
    int x;
    cin>>x;
    v[i]=x;
    if(x%k==0)flag=true;
    else if(x>k)
}



}