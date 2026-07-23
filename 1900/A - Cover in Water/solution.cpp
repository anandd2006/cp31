#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int nb=0;
        for(char c:s){
            if(c=='#')nb++;
        }
        if(nb==n){cout<<0<<"
";
            continue;
        }
            bool MiddleExists=false;
            for(int i=1;i<n-1;i++){
                if(s[i-1]==s[i+1]&&s[i]=='.'&&s[i-1]=='.'){
                    MiddleExists=true;
                    break;
                }
            }
            if(MiddleExists){
                cout<<2<<"
";
            }else{
                cout<<n-nb<<"
";
        
        }
    }
}