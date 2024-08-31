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
int count=0;
int maxcount=INT_MIN;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==0){
        count++;
    }
    else count=0;
    if(maxcount<count)maxcount=count;
}
cout<<maxcount<<endl;
}
}



