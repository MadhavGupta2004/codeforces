#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
#include<limits.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int minta=INT_MAX;
int mintb=INT_MAX;
int sum=INT_MAX;
for(int i=0;i<n;i++){
    int m;
    string s;
    cin>>m;
    cin>>s;
    if(s[0]=='1' && s[1]=='1'){
            sum=min(sum,m);
    }
    else if(s[0]=='1' && s[1]=='0'){
        minta=min(m,minta);
    }
    else if(s[0]=='0' && s[1]=='1'){
        mintb=min(m,mintb);
    }
}
// cout<<minta<<" "<<mintb<<" "<<endl;
if((minta==INT_MAX || mintb==INT_MAX) && sum==INT_MAX)cout<<-1<<endl;
else if(sum!=INT_MAX && ((minta==INT_MAX) || (mintb==INT_MAX))){
    cout<<sum<<endl;
}
 else cout<<min(sum,minta+mintb)<<endl;
}

}
