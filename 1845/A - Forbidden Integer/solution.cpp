#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        vector<int>v(n,1);
        cout<<v.size()<<endl;
        for(int x:v)cout<<x<<" ";
        cout<<endl;
    }else{
        if(k==2){
            if(n%2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                vector<int>v(n/2,2);
                cout<<v.size()<<endl;
                for(int x:v)cout<<x<<" ";
                cout<<endl;
            }
        }else if(k==1){
            cout<<"NO"<<endl;
        }else{
            if(n%2==0){
                cout<<"YES"<<endl;
                vector<int>v(n/2,2);
                cout<<v.size()<<endl;
                for(int x:v)cout<<x<<" ";
                cout<<endl;
            }else{
                cout<<"YES"<<endl;
                vector<int>v((n-3)/2,2);
                v.push_back(3);
                cout<<v.size()<<endl;
                for(int x:v)cout<<x<<" ";
                cout<<endl;
            }
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}