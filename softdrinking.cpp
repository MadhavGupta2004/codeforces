#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
//  n, k, l, c, d, p, nl, np
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>nl>>np;
int drink=k*l;
int toast=drink/nl;
int limes=c*d;
int eno=p/np;
int ans=min(toast,min(limes,eno));
cout<<ans/n<<endl;


}