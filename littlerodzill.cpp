#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
int n;
cin>>n;
int mini=INT_MAX;
int ans=0;
   int count=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(mini>x){
        mini=x; 
        ans=i+1;
        count=0;
    }
    else if(mini==x)count++;
}
if(count==0)cout<<ans<<endl;
else cout<<"Still Rozdil"<<endl;


}