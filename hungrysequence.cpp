#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n==0 || n==1)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
int main() {
 int n;
 cin>>n;
 int count=0;
    int i=2;
       while(true){
      {
          if(isPrime(i)) 
          {
            cout << i << " ";
            count++;
          }
          if(count==n)break;
          i++;
    }
 }

}
