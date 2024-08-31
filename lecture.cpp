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
vector<string> a;
vector<string> b;
for(int i=0;i<m;i++){
    string s;
    cin>>s;
    a.push_back(s);
    string k;
    cin>>k;
    b.push_back(k);
}
vector<string> v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
for(int i=0;i<n;i++){
    string s=v[i];
for(int j=0;j<m;j++){
string m=a[j];
string l=b[j];
if(s==m){
    if(m.size()<=l.size()){
        cout<<m<<" ";
    }
    else{
        cout<<l<<" ";
    }
}
}
}

}
