#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<int> v(n);
for(int i=0;i<n;i++){
 cin>>v[i];
}
int count=0;
for(int i=0;i<n;i++){
 if(v[i]+k<=5)count++;
}
cout<<count/3<<endl;




}