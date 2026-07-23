#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int &x:v){
        cin>>x;
    }
 
    for(int &x:v){
        x=n-x+1;
    }  
    
    for(int x:v)cout<<x<<" ";
    cout<<endl;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}