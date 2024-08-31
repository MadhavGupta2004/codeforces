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
    string s,k;
    cin>>s>>k;
    int i=0;
    int j=0;
    int cont=0;
    int strcount=0;
    cout<<s.size()<<" "<<k.size()<<endl;
    while(i<s.size() && j<k.size()){
        if(k[j]==s[i]){
            j++;
            cont++;
        }
        else if(s[i]=='?'){
            strcount++;
        }
       i++;
    }
    cout<<strcount<<" "<<cont<<endl;
    if(strcount>=k.size()-cont){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
}