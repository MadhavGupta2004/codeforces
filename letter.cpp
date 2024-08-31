#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    unordered_map<char,int> m1;
    unordered_map<char,int> m2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=' ') m1[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
       if(s2[i]!=' ') m2[s2[i]]++;
    }
    bool flag=true;
    for(auto p:m2){
        if(m1.find(p.first)==m1.end()){
            flag=false;
        }
        else if(m1.find(p.first)!=m1.end()){
            int x=m1[p.first];
            if(x<p.second)flag=false;
        }
    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


  
}




