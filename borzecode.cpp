#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='.'){
        ans+='0';
        }
        else if(s[i]=='-' && s[i+1]=='.'){
             ans+='1';
             i++;
        }
        else{
            ans+='2';
            i++;
        }
          if(i==s.size()-2){
                ans+='0';
             }
    }
    if(ans=="")ans+='0';
    cout<<ans<<endl;

}