#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    int oddcount=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2!=0)oddcount++;
    }
    if(n%2==0 && oddcount==n)cout<<"NO"<<endl;
    else if(n%2!=0 && oddcount>0)cout<<"YES"<<endl;
    else if(n%2==0 && oddcount<n && oddcount>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}

