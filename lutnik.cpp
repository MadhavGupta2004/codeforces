#include<iostream>
#include<vector>
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
        int noz=0;
        int noo=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0)noz++;
            else if(v[i]==1)noo++;
        }
        long long x=1LL<<noz;
        if(noz==0)cout<<noo<<endl;
        else cout<<noo*x<<endl;
    }
   
}