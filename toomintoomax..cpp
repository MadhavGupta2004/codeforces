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
 int i=v[0];
 int j=v[n-2];
 int k=v[1];
 int l=v[n-1];
 int sum=abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
 cout<<sum<<endl;
}

}