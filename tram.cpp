#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<pair<int,int>> v(n);
bool flag=false;
for(int i=0;i<n;i++){
int a,b;
cin>>a>>b;
if((a>=1 || b>=1) && flag==false){
    flag=true;
}
v[i]={a,b};
}
if(flag==true){
int answer=v[0].second;
int maxi=v[0].second;
for(int i=1;i<n;i++){
answer-=v[i].first;
answer+=v[i].second;
maxi=max(maxi,answer);
}
cout<<maxi<<endl;
}
else cout<<0<<endl;

}
