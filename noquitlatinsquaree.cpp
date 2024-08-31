#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
   int a=0,b=0,c=0;
for(int i=0;i<3;i++){
string s;
cin>>s;
for(int j=0;j<3;j++){
    if(s[j]=='A')a++;
    else if(s[j]=='B')b++;
    else c++;
}
}
if(a!=3)cout<<'A'<<endl;
else if(b!=3)cout<<'B'<<endl;
else cout<<'C'<<endl;

}

}