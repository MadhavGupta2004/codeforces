#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int x,y,k;
    cin>>x>>y>>k;
    if(y<=x)cout<<x<<endl;
    else if(x+k>=y)cout<<y<<endl;
    else{
        int ans=x+k;
        ans+=2*(y-ans);
        cout<<ans<<endl;
    }
}


}