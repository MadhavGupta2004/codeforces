#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        if(n%2!=0)count++;
        n=n/2;
    }
    cout<<count<<endl;
}

