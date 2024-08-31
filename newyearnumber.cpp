#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   int x=(n/2020)*2020;
   int y=(n/2021)*2021;
   if(n<2020)cout<<"NO"<<endl;
   else if(x%2021==0 || y%2020==0 || n%2020==0 || n%2021==0){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

}
}




