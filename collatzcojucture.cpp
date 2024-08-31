#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y,k;
    cin>>x>>y>>k;
    bool flag=false;
    while(k--){
    if(flag==false){
            x++;
            flag=true;
    }
    if(x%y==0){
         x=x/y;
         k++;
         if(x%y!=0){
            k--;
            flag=false;
         }
     }
     else{
        flag=false;
     }
     
    }
    cout<<x<<endl;
    }
}
// 2
// 1
// 1
// 2
// 3
// 1338
// 1
// 16936
// 1
// 21180097
// 6486
// 1
// 2
