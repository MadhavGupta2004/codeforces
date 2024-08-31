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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counta=0;
    int countb=0;
    int countc=0;
    int countd=0;
int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A')counta++;
        else if(s[i]=='B')countb++;
        else if(s[i]=='C')countc++;
        else if(s[i]=='D')countd++;
    }
    sum+=min(counta,n);
    sum+=min(countb,n);
    sum+=min(countc,n);
    sum+=min(countd,n);
    cout<<sum<<endl;
}



}