#include<iostream>
using namespace std;
int main(){
    int ans=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        int x;
        cin>>x;
        if(x==1){
            ans=abs(2-j)+abs(2-i);
        }
    }
}
 cout<<ans<<endl;
}