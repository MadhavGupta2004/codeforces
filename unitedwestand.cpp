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
    vector<int> v(n);
    for(int i=0;i<n;i++){ 
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[0]==v[n-1])cout<<-1<<endl;
    else{
        int j=0;
        while(v[0]==v[j])j++;
        cout<<j<<" "<<n-j<<endl;
        for(int i=0;i<j;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(int i=j;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
}


}