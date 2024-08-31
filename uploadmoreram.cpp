#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
         int ans=0;
        cin>>n>>k;
        while(n>0){
        bool flag=false;
        for(int i=1;i<=k;i++){
            if(n==0)break;
            if(flag==false){
                flag=true;
                n--;
            }

            ans++;
        }
        }
        cout<<ans<<endl;
    }
    

}