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
    int l,r;
    cin>>l>>r;
    int count=0;
    for(int i=l;i<=r;i++){
        if(i%2==0)continue;
        else if(i+2<=r){
            count++;
            i+=2;
        } 
    }
    cout<<count<<endl;
}

}

