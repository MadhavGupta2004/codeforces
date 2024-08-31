#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
vector<vector<char>> v(8, vector<char>(8));
for(int i=0;i<8;i++){
   for(int j=0;j<8;j++){
    cin>>v[i][j];
}
}
for(int i=1;i<7;i++){
   for(int j=1;j<7;j++){
   if(v[i][j]=='#' && v[i-1][j]=='.' && v[i][j-1]=='.' && v[i][j+1]=='.' && v[i+1][j]=='.' && v[i+1][j+1]=='#' &&  v[i-1][j-1]=='#' && v[i-1][j+1]=='#' && v[i+1][j-1]=='#'){
    cout<<i+1<<" "<<j+1<<endl;
   }
}
}
}
}

