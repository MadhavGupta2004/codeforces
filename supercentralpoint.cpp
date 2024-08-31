#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int a,b;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
cin>>a>>b;
v[i]={a,b};
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    if(i==j)continue;
    if(v[j].first==v[i].first){

    }


}
}



}