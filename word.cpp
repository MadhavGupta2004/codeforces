#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
cin>>s;
int upcount=0;
int locount=0;
for(auto x:s){
    if(x>=65 && x<=90){
        upcount++;
    }
    else locount++;
}
if(upcount>locount){
     transform(s.begin(),s.end(),s.begin(),::toupper); 
}
else{
      transform(s.begin(),s.end(),s.begin(),::tolower); 
}
cout<<s<<endl;
}