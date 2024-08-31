#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        if(n==1)cout<<"YES"<<endl;
        else{
              bool flag1 = false, flag2 = false;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1]){
                if(s[i] == '1') flag1 = true;
                else flag2 = true;
            }
        }
        bool fflag = false;
        for(int i = 0; i < m - 1; i++){
            if(t[i] == t[i + 1]){
                fflag = true;
                break;
            }
        }
        if(fflag){
            cout << "NO" << endl;
            continue;
        }
        if(flag1==false && t[0]=='1' && t[m-1]=='1'){
         cout<<"YES"<<endl;
        }
        else if(flag2==false && t[0]=='0' && t[m-1]=='0'){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

        }

      
    }
}
