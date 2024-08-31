#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int c1=1;
      int c2=1;
      int maxi=0;
      int maxi2=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='<' && s[i]==s[i+1]){
            c1++;
        }
        else if(s[i]=='<'){
              maxi=max(c1,maxi);
            c1=1;
        }
        else if(s[i]=='>' && s[i]==s[i+1]){
          c2++;
        }
        else if(s[i]=='>'){
              maxi2=max(c2,maxi2);
            c2=1;
        }

      }
    // if(maxi==0)cout<<maxi2+1<<endl;
    // else if(maxi2==0)cout<<maxi+1;
      cout<<max(maxi,maxi2)+1<<endl;
    }
   
}