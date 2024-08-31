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
int sum=0;
int product=1;
for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
    product*=v[i];
}
if(sum>=0 && product==1)cout<<0<<endl;
else if(sum<0 && product==1)cout<<(abs(sum))/2<<endl;
else if(sum<0 && product==-1)



}
}

