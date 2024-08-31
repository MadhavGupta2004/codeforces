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
 string s;
 cin>>s;
 string k="codeforces";
 int count=0;
 for(int i=0;i<10;i++){
    if(s[i]!=k[i])count++;
 }
 cout<<count<<endl;
}

}
