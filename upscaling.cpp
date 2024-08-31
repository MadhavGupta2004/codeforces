#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
void swapi(char &ch){
    if(ch=='.')ch='#';
    else ch='.';
}
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
char ch='#';
int rcount=1;
for(int i=1;i<=2*n;i++){
    int colcount=1;
    for(int j=1;j<=2*n;j++){
    cout<<ch;
    if(colcount==2){
        colcount=0;
        swapi(ch);
    }
    colcount++;
    }
    if(rcount==2){
        swapi(ch);
        rcount=0;
    }
    if(n%2!=0)swapi(ch);
    // swapi(ch);
    rcount++;
    cout<<endl;
}
}
}