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
    int a,b,c,d;
    for(int i=0;i<4;i++){
        int x,y;
        cin>>x>>y;
        if(i==0){
            a=x;
            b=y;
        }
        if(i>0 && a==x || b==y){
            c=x;
            d=y;
        }
    }
    int side=abs(a-c)+abs(b-d);
    int area=side*side;
    cout<<area<<endl;

}
}

