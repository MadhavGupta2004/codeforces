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
for(int i=0;i<n;i++){
    cin>>v[i];
}
int m;
cin>>m;
vector<string> p(m);
for(int i=0;i<m;i++){
    cin>>p[i];
}
for(int i=0;i<m;i++){
    string s=p[i];
    bool flag=true;
    if(s.size()!=n){
        cout<<"NO"<<endl;
        continue;
    }
    else{
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(s[j]==s[k]){
                    if(v[j]!=v[k]){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag==false)break;
        }
    }
    if(flag==false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
}
}



