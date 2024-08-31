#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            c++;
        }
    }
    if(c%2==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
}