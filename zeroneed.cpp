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
    int xo=0;
    for(int i=0;i<n;i++){
       xo=xo^v[i];
    }
    if(n%2!=0){
    cout<<xo<<endl;
    }
    else{
        if(xo==0){
            cout<<v[0]<<endl;
        }
        else cout<<-1<<endl;
    }
  }

}




