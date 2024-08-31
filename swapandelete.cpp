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
    string s;
    cin>>s;
    int co=0;
    int cz=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')co++;
        else cz++;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' && cz>0)cz--;
        else if(s[i]=='0' && co>0)co--;
        else break;
    }
    cout<<cz+co<<endl;
    
    
  }
}

