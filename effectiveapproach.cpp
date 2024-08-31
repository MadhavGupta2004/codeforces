#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    unordered_map<int,int> m;
     for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]=i;
     }
     int nq;
     cin>>nq;
     vector<int> q(nq);
     for(int i=0;i<nq;i++){
        cin>>q[i];
     }
     long long ans1=0;
     long long ans2=0;
     for(int i=0;i<q.size();i++){
      if(m.find(q[i])!=m.end()){
         ans1+=m[q[i]]+1;
         ans2+=v.size()-m[q[i]];
      }
     }
     cout<<ans1<<" "<<ans2<<endl;
}