#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
     int i=0;
     bool flag=true;
     while(i<s.size()){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i+=2;
        }
        else if(s[i]=='1' && s[i+1]=='4'){
            i+=1;
        }
        else if(s[i]=='1'){
            i++;
           continue;
        }
        else{
            flag=false;
            break;
        }
        i++;
     }
     if(flag==true)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;


}