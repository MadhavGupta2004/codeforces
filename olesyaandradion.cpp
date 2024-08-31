#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
long long n,t;
cin>>n>>t;
// if(n==1){
// cout<<-t<<endl;
// }
// else{
string s="";
if(t!=10){
    for(int i=0;i<n;i++){
        s+=to_string(t);
    }
    cout<<s<<endl;
}
else{
    if(n==1)cout<<-1<<endl;
    else{
    for(int i=0;i<n-1;i++){
        s+='1';
    }
    s+='0';
    cout<<s<<endl;
    }
}

}
// }