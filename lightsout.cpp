#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int swapi(int x){
    if(x==1)return 0;
    else return 1;
}
int main(){
 vector<vector<int>> v(3,vector<int>(3));
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>v[i][j];
    }
 }
 vector<vector<int>> ans(3, vector<int>(3));
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        ans[i][j]=1;
    }
 }
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(v[i][j]%2!=0){
            ans[i][j]=swapi(ans[i][j]);
           if(j>0) ans[i][j-1]=swapi(ans[i][j-1]);
           if(j<2)ans[i][j+1]=swapi(ans[i][j+1]);
           if(i>0) ans[i-1][j]=swapi(ans[i-1][j]);
            if(i<2)ans[i+1][j]=swapi(ans[i+1][j]);
        }
    }
 }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<ans[i][j];
    }
    cout<<endl;
 }

  
}

