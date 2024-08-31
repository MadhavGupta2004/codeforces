#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
   int n,m,k;
   cin>>n>>m>>k;
   cout<<min(n,k)*min(m,k)<<endl;
}

}