#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(7);
for(int i=0;i<7;i++){
    cin>>v[i];
}
while(n>0){
for(int i=0;i<7;i++){
n-=v[i];
if(n<=0){
    cout<<i+1<<endl;
    break;
}
}
}
}