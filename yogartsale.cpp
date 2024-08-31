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
    int n,a,b;
    cin>>n>>a>>b;
    if(2*a<=b){
        cout<<n*a<<endl;
    }
    else{
        if(n%2==0)cout<<(n*b)/2<<endl;
        else cout<<(((n-1)*b)/2)+a<<endl;
    }
}



}


