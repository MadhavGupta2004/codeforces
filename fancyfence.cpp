#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(360%(180-a)==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}
