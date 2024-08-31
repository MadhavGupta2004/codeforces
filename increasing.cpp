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
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
bool flag=true;
for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
        flag=false;
        cout<<"NO"<<endl;
        break;
    }
}
if(flag)cout<<"YES"<<endl;

}

}
