#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
 int a,b,c;
 cin>>a>>b>>c;
 if(a<b && b<c)cout<<"STAIR"<<endl;
 else if(a<b && b>c)cout<<"PEAK"<<endl;
 else cout<<"NONE"<<endl;
}

}