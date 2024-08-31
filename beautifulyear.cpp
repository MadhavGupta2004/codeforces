#include<iostream>
#include<vector>
using namespace std;
bool different(vector<int> v){
    if(v[0]!=v[1] && v[1]!=v[2] && v[0]!=v[2] && v[3]!=v[1] && v[3]!=v[0] && v[3]!=v[2]){
        return true;
    }
    return false;
}
void isten(vector<int>& v,int i){
if(v[i]==10){
    v[i]=0;
    v[i+1]++;
    isten(v,i+1);
}
else{
   v[i]++;
}
}
int main(){
int n;
cin>>n;
vector<int> v;
while(n>0){
    v.push_back(n%10);
    n=n/10;
}
v[0]++;
while(!different(v)){
isten(v,0);
}
for(auto x:v){
    cout<<x<<" ";
}



}