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
int maxi=v[n-1];
int mini=v[0];
if(maxi!=mini){
    cout<<"YES"<<endl;
    cout<<maxi<<" "<<mini<<" ";
    for(int i=1;i<n-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
else cout<<"NO"<<endl;

    

    
 }


  }




