#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        vector<int> v(3);
        v[0]=x1,v[1]=x2,v[2]=x3;
        sort(v.begin(),v.end());
        int dis=(v[1]-v[0])+(v[2]-v[1]);
        cout<<dis<<"\n";
    }
}