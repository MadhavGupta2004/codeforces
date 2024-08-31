#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
bool islucky(long long n){
    while(n>0){
        int r=n%10;
        if(r!=4 && r!=7)return false;
        n=n/10;
    }
    return true;
}
using namespace std;
int main(){
long long n;
cin>>n;
int count=0;
  while(n>0){
    int k=n%10;
    if(k==4 || k==7)count++;
    n=n/10;
    }
    if(islucky(count) && count!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}