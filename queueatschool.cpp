#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
   string s;
   cin>>s;
   for(int i=0;i<s.size()-1;i++){
    if(t<=0)break;
    for(int j=0;j<s.size()-1;j++){
        if(t>0){
        if(s[j]=='B' && s[j+1]=='G'){
         swap(s[j],s[j+1]);
         j++;
        }
     
    }
    }
       t--;

   }
   cout<<s<<endl;   
   
}