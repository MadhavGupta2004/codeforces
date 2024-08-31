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
vector<pair<int,string>> m(n);
for(int i=0;i<n;i++){
   int x;
   cin>>x;
   string s;
   cin>>s;
   m[i]={x,s};
}
for(int i=0;i<n;i++){
  for(int j=0;j<m[i].first;j++){
    if(m[i].second[j]=='D'){
        if(v[i]==9){
            v[i]=0;
        }
        else v[i]+=1;
    }
    if(m[i].second[j]=='U'){
        if(v[i]==0){
            v[i]=9;
        }
        else v[i]-=1;
    }
  }
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;




}

}
