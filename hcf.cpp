#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int hcf(int a,int b){
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0)return i; 
    }
    return 1;
}
int main(){
    cout<<hcf(23,4);
}



