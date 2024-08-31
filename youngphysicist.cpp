#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y,z;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    bool flag2=false;
    while(n--){
     cin>>x>>y>>z;
    v1.push_back(x);
    v2.push_back(y);
    v3.push_back(z);
    if((x || y ||z)!=0)flag2=true;
    }
    int sum1=0;
    int sum2=0;
    int sum3=0;
    bool flag=false;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==0 && v2[i]==0 && v3[i]==0)flag=true;
        sum1+=v1[i];
        sum2+=v2[i];
        sum3+=v3[i];
    }
    if(flag2==false)cout<<"YES"<<endl;
   else if(sum1==sum2 && sum2==sum3 && flag==false)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}