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
 vector<int> v(n);
 long long total2=0;
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v[i]=x;
    if(x==2)total2++;
 }
 long long left2=0;
 int a=-1;
for(int i=0;i<n-1;i++){
    if(v[i]==2)left2++;
  long long right2 = total2-left2;
  if(left2==right2){
  a=i+1;
  break;
  }
}
  cout<<a<<endl;
    

    
 }


  }




