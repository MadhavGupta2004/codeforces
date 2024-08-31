#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
int n;
while(t--){
    cin>>n;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++){
      v[i]=i;
    }
    for(int i=1;i<=n;i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;

}

}