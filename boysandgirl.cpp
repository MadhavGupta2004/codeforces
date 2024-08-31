#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
string s="";
if(n>m){
    for(int i=0;i<m;i++){
       s+="BG";
    }
    for(int i=m;i<n;i++){
        s+='B';
    }
}
else{
    for(int i=0;i<n;i++){
       s+="GB";
    }
    for(int i=n;i<m;i++){
        s+='G';
    }
}
cout<<s<<endl;

}