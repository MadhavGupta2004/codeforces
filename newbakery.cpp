#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n,a,b;
    while(t--){
    cin>>n>>a>>b;
   long long i=1;
    long long total=0;
    while(b-i+1>=a && n){
        total+=b-i+1;
        i++;
        n--;
    }
    for(long long j=0;j<n;j++){
        total+=a;
    }
    cout<<total<<endl;

}
}