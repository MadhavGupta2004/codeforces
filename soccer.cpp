#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if(x1<x2 && y1>y2){
          cout<<"NO"<<endl;
        }
        else if(x1>x2 && y1<y2){
            cout<<"NO"<<endl;
            }
        else if(x1>x2 && y1>y2){
            cout<<"YES"<<endl;
        }
        else if(x1<x2 && y1<y2){
            cout<<"YES"<<endl;
            }
    else{
        cout<<"YES"<<endl;
        }
    }
}