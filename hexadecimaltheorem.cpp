#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int lastfibo(int n){
int a=0;
int b=1;
int fibo=a+b;
    while(fibo<n){
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return a;
}
int main(){
int n;
cin>>n;
int x=lastfibo(n);
int y=lastfibo(lastfibo(x));
int z=n-x-y;
cout<<x<<" "<<y<<" "<<z<<endl;
}