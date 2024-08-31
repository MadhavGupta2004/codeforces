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
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    bool flag=true;
    vector<vector<int>> v2;
    sort(v.begin(),v.end());
    for(int i=1;i<=n/3;i++){
        if(mp.find(1)!=mp.end()){
            if(mp.find(2)!=mp.end()){
                if(mp.find(4)!=mp.end()){
                    // cout<<1<<" "<<2<<" "<<4<<endl;
                    v2.push_back({1,2,4});
                    mp[1]--;
                    if(mp[1]==0)mp.erase(1);
                    mp[2]--;
                    if(mp[2]==0)mp.erase(2);
                    mp[4]--;
                    if(mp[4]==0)mp.erase(4);
                }
                else if(mp.find(6)!=mp.end()){
                    // cout<<1<<" "<<2<<" "<<6<<endl;
                    v2.push_back({1,2,6});
                    mp[1]--;
                    if(mp[1]==0)mp.erase(1);
                    mp[2]--;
                    if(mp[2]==0)mp.erase(2);
                    mp[6]--;
                    if(mp[6]==0)mp.erase(6);
                    continue;
                }
                else {
                    flag=false;
                    break;
                }
            }
             else if(mp.find(3)!=mp.end()){
                if(mp.find(6)!=mp.end()){
                   v2.push_back({1,3,6});
                    mp[1]--;
                    if(mp[1]==0)mp.erase(1);
                    mp[3]--;
                    if(mp[3]==0)mp.erase(3);
                    mp[6]--;
                    if(mp[6]==0)mp.erase(6);
                    continue;
                }
                else {
                    flag=false;
                    break;
                }
        }
        else{
            flag=false;
        }
        }
        else {
           flag=false;
            break;
        }
    }
    if(flag==false)cout<<-1<<endl;
    else{
        for(int i =0;i<v2.size();i++){
            for(int j=0;j<v2[0].size();j++){
                cout<<v2[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}




