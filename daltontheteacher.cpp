#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int i=1;i<=n;i++){
           int x;
           cin>>x;
            if(x==i)count++;
        }
        if(count==0 || count==1)cout<<count<<endl;
        else{
            if(count%2==0)cout<<count/2<<endl;
            else cout<<(count/2)+1<<endl;
        }
    }

}




