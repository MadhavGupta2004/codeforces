#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n;
 cin>>n;
 int mindiff=INT_MAX;
for(int i=0;i<n;i++){
int x;
cin>>x;
   mindiff=min(mindiff,abs(x));
}
cout<<mindiff<<endl;

}