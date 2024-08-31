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
int n;
cin>>n;
string s;
cin>>s;
vector<int> v(27,1);
int ans=0;
for(int i=0;i<n;i++){
    if(v[s[i]-64]==1){
        v[s[i]-64]=2;
        ans+=2;
    }
    else{
        ans++;
    }
}
cout<<ans<<endl;


}

}
