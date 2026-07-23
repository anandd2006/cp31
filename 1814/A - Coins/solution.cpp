#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n,k;
    cin>>n>>k;
    if(n%2&&!(k%2)){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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