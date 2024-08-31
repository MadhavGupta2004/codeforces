#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
     cin>>v[i];
     mp[v[i]]++;
    }
    int maxfreq=0;
    for(auto p:mp){
        if(p.second>maxfreq)maxfreq=p.second;
    }
    cout<<n-maxfreq<<endl;
}

}