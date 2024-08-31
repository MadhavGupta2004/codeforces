#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<limits.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
  long long n,mn,mx;
        cin>>n;
        if(n%2==1 || n<4) cout<<-1<<endl;
        else
        {
            mn = n/6;
            if(n%6!=0) mn++;
            
            mx = n/4;

            cout<<mn<<" "<<mx<<endl;
        }

  }
}
