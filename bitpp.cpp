#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int x=0;
for(int i=0;i<n;i++){
    string s;
cin>>s;
for(int j=0;j<2;j++){
    if(s[j]=='+'){
        x++;
        break;
    }
    else if(s[j]=='-'){
        x--;
        break;
    }
}
}
cout<<x<<endl;
}