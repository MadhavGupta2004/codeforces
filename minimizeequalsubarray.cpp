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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
   cin>>v[i];
    }
    int x=v[0];
    for(int i=1;i<n;i++){
     v[i-1]=v[i];
    }
    v[n-1]=x;
    for(int i=0;i<n;i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;


}
}

