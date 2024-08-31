#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
using namespace std;
int sumofotherelements(vector<int> v,int idx){
    int sum=0;
    for(int i=0;i<i+1;i++){
        if(i!=idx){
           sum+=v[i];
        }
    }
    return sum;
}
int main(){
int t;
cin>>t;
int n;
while(t--){
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int ans=0;
for(int i=0;i<n;i++){
    if(v[i]==sumofotherelements(v,i)){
      ans++;
    }
}
cout<<ans<<endl;
}
}
// 1
// 0
// 3
// 3
// 4
// 1
// 2