#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int mini=INT_MAX;
if(a<b && a<c){
    mini=a;
}
else if(b<a && b<c){
    mini=b;
}
else{
    mini=c;
}
for(int i=2;i<=(mini)/2;i++){
while(a%i==0 && b%i==0 && c%i==0){
    a=a/i;
    b=b/i;
    c=c/i;
}
}
cout<<(a*4+b*4+c*4)<<endl;
}