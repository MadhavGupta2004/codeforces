#include<iostream>
#include<vector>
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
    bool flag=false;
    for(int i=1;i<n-1;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            cout<<"YES"<<endl;
            cout<<i-1+1<<" "<<i+1<<" "<<i+1+1<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false)cout<<"NO"<<endl;


}
}