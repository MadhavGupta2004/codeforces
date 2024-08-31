#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int score=0;
        for(int i=l;i<=r/2;i++){
            int x=i;
            int p=i;
            while(x!=1 && p>=2 && (x%p==0)){
               x=x/p;
               score++;
            }
        }
        cout<<score;
    }
}