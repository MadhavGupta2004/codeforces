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
    int n,k,x;
cin>>n>>k>>x;
if(x!=1){
    cout<<"YES"<<endl;
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        cout<<1<<" ";
    }
    cout<<endl;
}
else if(k==1){
    cout<<"NO"<<endl;
}
else{
    if(k==2 && n%2==0){
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
    for(int i=1;i<=n/2;i++){
        cout<<2<<" ";
    }
    cout<<endl;
    }
    else if(k==2){
        cout<<"NO"<<endl;
    }
    else if(k>2){
        int count=0;
        cout<<"YES"<<endl;
        while(n>0 && n%3!=0){
            count++;
            n-=2;
        }
        cout<<count+(n/3)<<endl;
        for(int i=1;i<=count;i++){
            cout<<2<<" ";
        }
        for(int i=1;i<=n/3;i++){
            cout<<3<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}

}