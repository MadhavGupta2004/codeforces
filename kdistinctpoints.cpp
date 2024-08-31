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
int x,y,k;
cin>>x>>y>>k;
 if(k%2==0){
        cout<<k*x<<" "<<k*y<<endl;
        cout<<0<<" "<<0<<endl;
        for(int i=1;i<=k/2;i++){
            cout<<i<<" "<<i<<endl;
            cout<<-i<<" "<<-i<<endl;
        }

}
else{
    cout<<k*x<<" "<<k*y<<endl;
        for(int i=1;i<=k/2;i++){
            cout<<i<<" "<<i<<endl;
            cout<<-i<<" "<<-i<<endl;
        }
}
}
}
