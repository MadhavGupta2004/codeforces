#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
   int n,m;
   cin>>n;
   vector<long long> v(n+1);
   for(int i=1;i<=n;i++){
    cin>>v[i];
   }
   cin>>m;
   vector<int> typ(m);
   vector<pair<int,int>> range(m);
   for(int i=0;i<m;i++){
    cin>>typ[i];
    int a,b;
    cin>>a>>b;
    range[i]={a,b};
   }
   vector<long long> dupli=v;
   sort(dupli.begin(),dupli.end());
   long long sum=v[1];
   for(int i=2;i<=n;i++){
    v[i]+=sum;
    sum=v[i];
   }
   sum=dupli[1];
   for(int i=2;i<=n;i++){
    dupli[i]+=sum;
    sum=dupli[i];
   }
   for(int i=0;i<m;i++){
    if(typ[i]==1){
        cout<<v[range[i].second]-v[range[i].first-1]<<endl;
    }
    else{
      cout<<dupli[range[i].second]-dupli[range[i].first-1]<<endl;
    }
   }
}