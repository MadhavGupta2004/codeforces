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
int a,b,c,d;
cin>>a>>b>>c>>d;
int count=0;
if(a<b){
    count++;
}
if(a<c)count++;
if(a<d)count++;
cout<<count<<endl;
}
}

