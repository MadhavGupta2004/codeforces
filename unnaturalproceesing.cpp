#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int i=0;
        string ans="";
        // int cnt=0;
        if(n==1)cout<<s<<endl;
        else{
        while(i<s.size()){
           if(i+2<n && (s[i+3]!='a' && s[i+3]!='e')){
            ans+=s[i];
            ans+=s[i+1];
            ans+=s[i+2];
            ans+='.';
            i+=3;
           }
           else{
            ans+=s[i];
            ans+=s[i+1];
             ans+='.';
             i+=2;
           }
       }
       cout<<ans.substr(0,ans.size()-1)<<endl;
        }
     
    }
    return 0;
}
