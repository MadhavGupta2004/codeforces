#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
int a,b,c;
while(t--){
cin>>a>>b>>c;
for(int i=1;i<=5;i++){
   if(a<=b && a<=c){
    a++;
   }
   else if(b<a && b<c){
    b++;
   }
   else c++;
}
cout<<a*b*c<<endl;
}
}