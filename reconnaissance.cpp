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
int minhdis=INT_MAX;
int a=0;
int b=0;
vector<int> v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
for(int i=0;i<n-1;i++){
int j=i+1;
if(minhdis>abs(v[i]-v[j])){
    minhdis=abs(v[i]-v[j]);
    a=i+1;
    b=j+1;
}
}
if(minhdis>abs(v[0]-v[n-1])){
    a=1;
    b=n;
}
cout<<a<<" "<<b<<endl;
}