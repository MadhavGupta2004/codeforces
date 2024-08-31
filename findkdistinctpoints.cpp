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
int x,y,k;
cin>>x>>y>>k;
if(k%2!=0)cout<<x<<" "<<y<<endl;
    for(int i=1;i<=k/2;i++){
       cout<<(x)<<" "<<(y-i)<<endl;
       cout<<(x)<<" "<<(y+i)<<endl;
    }
}
}

