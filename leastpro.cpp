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
long long n;
cin>>n;
int posi=0;
int negi=0;
bool flag=false;

for(int i=0;i<n;i++){
    long long x;
    cin>>x;
    if(x>0)posi++;
    else if(x<0)negi++;
    else flag=true;
}
if(flag==true || negi%2!=0){
    cout<<0<<endl;
}
else{
    cout<<1<<endl;
    cout<<1<<" "<<0<<endl;
}
}
}
