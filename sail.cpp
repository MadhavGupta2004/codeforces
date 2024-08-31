#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t>>a>>b>>c>>d;
    string s;
    cin>>s;
    string k=" ";
    k+=s;
    int temp=-1;
    for(int i=1;i<=t;i++){
        if(a>c && k[i]=='W'){
            //west
            a-=1;
        }
        else if(a<c && k[i]=='E'){
            //east
            a+=1;
        }
        else if(b>d && k[i]=='S'){
            //south
            b-=1;
        }
        else if(b<d && k[i]=='N'){
            //north
            b+=1;
        }
        if(a==c && b==d){
         temp=i;
         break;
        }
    }
    cout<<temp<<endl;
    

}




