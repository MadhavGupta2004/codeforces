#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s;
cin>>s;
int count=0;
for(int i=0;i<n;i++){
    if(s[i]=='B'){
        i+=k-1;
        count++;
    }
}
cout<<count<<endl;

}


}