#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int> v(m);
priority_queue<int> p1;
priority_queue<int,vector<int>,greater<int>> p2;
for(int i=0;i<m;i++){
int x;
cin>>x;
p1.push(x);
p2.push(x);
}
int sum=0;
int count=0;
while(p1.size()!=0){
if(p1.top()<=0)p1.pop();
sum+=p1.top();
int k=p1.top();
p1.pop();
p1.push(k-1);
count++;
if(count==n)break;
}
count=0;
int sum2=0;
while(p2.size()!=0){
if(p2.top()<=0)p2.pop();
sum2+=p2.top();
int k=p2.top();
p2.pop();
p2.push(k-1);
count++;
if(count==n)break;
}
cout<<sum<<" "<<sum2<<endl;


}




