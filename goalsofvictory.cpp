#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int sum=0;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    sum=-sum;
    cout<<sum<<endl;
   

}
}