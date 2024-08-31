#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
int divi(int n){
    int count=0;
    for(int i=1;i<=n;i++){
      if(n%i==0)count++;
    }
    return count;
}
using namespace std;
int main() {
int a,b,c;
cin>>a>>b>>c;
long long sum=0;
for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        for(int k=1;k<=c;k++){
           sum+=(divi(i*j*k))%1073741824;
        }
    }
}
cout<<sum<<endl;


}