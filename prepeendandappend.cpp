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
   string s;
   cin>>s;
   string ans="";
   int a=-1;
 int i=0;
 while(i<n){
     if((s[i]=='1' && s[n-1]=='0') || (s[i]=='0' && s[n-1]=='1')){
     n-=1;
     i++;
    //  cout<<n<<" ";
    }
    else{
      a=i;
      break;
    }
 }
  //  cout<<n<<" "<<a<<endl;
  if(a==-1)cout<<0<<endl;
   else cout<<n-a<<endl;
  }

}




