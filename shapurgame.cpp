#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string n,m;
cin>>n>>m;
int count=n.length();
vector<int> s;
while(count--){
    int k=n[count];
    int l=m[count];
   s.push_back(k^l);
    }reverse(s.begin(),s.end());
// cout<<s<<endl;
for(auto x:s){
    cout<<x;
}
cout<<endl;

}