#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
#include <iomanip>
using namespace std;
int main(){
float n;
cin>>n;
float sum=0;
for(int i=0;i<n;i++){
float x;
cin>>x;
sum+=x;
}
cout<<fixed<<setprecision(12)<<sum/n<<endl;
}