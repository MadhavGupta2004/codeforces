#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int k;
cin>>k;
while(k--){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int> a;
a.push_back(v[0]);
int j=1;
while(j<n){
    if(v[j-1]<=v[j]){
        a.push_back(v[j]);
        j++;
    }
    else{
        if(v[j]==1){
            a.push_back(1);
            a.push_back(1);
            j++;
        }
        else{
            a.push_back(v[j]-1);
            a.push_back(v[j]);
            j++;
        }

    }
}
cout<<a.size()<<endl;
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
}