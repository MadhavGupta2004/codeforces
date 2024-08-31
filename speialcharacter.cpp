#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   if(n%2!=0)cout<<"NO"<<endl;
   else{
    cout<<"YES"<<endl;
    string ans="";
    for(int i=1;i<=n/2;i++){
        if(i%2!=0)ans+="AA";
        else ans+="BB";
    }
    
    cout<<ans<<endl;
   }
}

}