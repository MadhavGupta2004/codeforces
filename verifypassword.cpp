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
    string s;
    cin>>s;
    string ans1="";
    string ans2="";
    for(int i=0;i<s.size();i++){
        if(s[i]<=48 && s[i]>=57){
            ans1+=s[i];
        }
        else ans2+=s[i];
    }
    sort(ans1.begin(),ans1.end());
    sort(ans2.begin(),ans2.end());
    ans1+=ans2;
    if(ans1==s){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
 }
 
  }




