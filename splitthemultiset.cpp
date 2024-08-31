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
if(n==1)cout<<0<<endl;
else{
    if(n<=k)cout<<1<<endl;
    else{
        if(n>=2*k)cout<<(n/k)+1+(n%k)<<endl;
        else cout<<2<<endl;

        
    }
}


}
}