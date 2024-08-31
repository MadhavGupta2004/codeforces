#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int n;
cin>>n;
unordered_map<int,int> m;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
}
if(n==1)cout<<"YES"<<endl;
else{
    bool flag=true;
    for(auto x:m){
      if(x.second > (n + 1) / 2) {
                flag = false;
                break;
     }
    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}
