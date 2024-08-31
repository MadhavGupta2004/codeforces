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
int a,b,c,d;
cin>>a>>b>>c>>d;
 int dif1=c-a;
int dif2=d-b;
if((a<b && c>=d) || d<b)cout<<-1<<endl;
else if(dif1>dif2)cout<<-1<<endl;
else{
    int sum=0;
    sum+=d-b;
    int x=a+sum-c;
    sum+=x;
    cout<<sum<<endl;
}
}
}



