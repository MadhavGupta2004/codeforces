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
 vector<int> v(n);
 for(int i=0;i<n;i++){
cin>>v[i];
 }
 sort(v.begin(),v.end());
 v[0]=v[0]+1;
 long long pro=1;
 for(int i=0;i<n;i++){
pro*=v[i];
 }
 cout<<pro<<endl;

}


}