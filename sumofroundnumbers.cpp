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
int n;
cin>>n;
string s=to_string(n);
int count=0;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='0'){
        count++;
    }
}
cout<<count<<endl;
count=0;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='0'){
        cout<<(s[i]-48)*pow(10,count)<<" ";
    }
    count++;
}
cout<<endl;
}

}
