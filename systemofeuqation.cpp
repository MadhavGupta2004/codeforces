#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int count=0;
for(int i=0;i<=sqrt(n);i++){
    for(int j=0;j<=sqrt(m);j++){
        if(i*i+j==n && i+j*j==m)count++;
    }
}
cout<<count<<endl;


}