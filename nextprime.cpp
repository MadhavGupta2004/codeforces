#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
int n,m;
cin>>n>>m;
int x=n;
while(1){
  x++;
  if(prime(x)==true){
    break;
  }
}
if(x==m)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}