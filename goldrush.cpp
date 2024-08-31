#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
#include<limits.h>
bool check(int n, int m){
    if(n==m)return true;
    else if(n%3!=0)return false;
    else return(check(n/3,m) || check((2*n)/3,m));
}
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
if(check(n,m)){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

}

}
