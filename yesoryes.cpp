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
if(s[0]!='y' && s[0]!='Y')cout<<"NO"<<endl;
else if(s[1]!='E' && s[1]!='e')cout<<"NO"<<endl;
else if(s[2]!='S' && s[2]!='s')cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}

}
