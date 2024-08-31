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
    string s;
    cin>>s;
    int numz=0;
    int numo=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')numo++;
        else numz++;
    }
    int mini=min(numz,numo);
    if(mini%2==0)cout<<"NET"<<endl;
    else cout<<"DA"<<endl;
    
}

}
