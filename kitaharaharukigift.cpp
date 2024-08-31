#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
int main(){
int n;
cin>>n;
int a=0;
int b=0;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]==100)a++;
    else b++;
}
if(a==2*b)cout<<"YES"<<endl;
else if(a%2!=0)cout<<"NO"<<endl;
else if(a%2==0 && a!=0)cout<<"YES"<<endl;
else if(a==0 && b%2==0)cout<<"YES"<<endl;
else if(b==0 && a%2==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}




