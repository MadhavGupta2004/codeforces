#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s=to_string(n);
if(n<k)cout<<"NO"<<endl;
else if(n%2!=0 && k%2!=0){
    cout<<"YES"<<endl;
    for(int i=1;i<=k-1;i++){
        cout<<1<<" ";
    }
    cout<<n-k-1<<endl;
}
else if(n%2!=0 && k%2==0)cout<<"NO"<<endl;

}

}
