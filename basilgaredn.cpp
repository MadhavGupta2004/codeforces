#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
bool allmostzero(vector<int> v){
    for(int i=1;i<v.size();i++){
        if(v[i]!=0)return false;
    }
    return true;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++){
      cin >> heights[i];
    }
    int ans=0;
    while(!allmostzero(heights)){
    for(int i=0;i<n;i++){
        if(i==n-1 || (heights[i]>heights[i+1])){
            heights[i]=max(0,heights[i]-1);
        }
    }
        ans++;
    }
    ans+=heights[0];
    cout<<ans<<endl;
    }
    

}