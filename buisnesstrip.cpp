#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
int k;
cin>>k;
vector<int> v(12);
for(int i=0;i<12;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
int ans=0;
int count=0;
for(int i=11;i>=0;i--){
    if(ans<k){
        ans+=v[i];
        count++;
    }
    if(ans<k && i==0){
        count++;
    }
    
}
if(count>12)cout<<-1<<endl;
else cout<<count<<endl;



}