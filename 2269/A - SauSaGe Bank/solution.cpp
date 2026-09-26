#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,k;
    cin>>n>>k;
    if(n==k){
        cout<<2*k<<'
';
        return;
    }else{
        int p=n-k+1;
        int q=k-1;
        ll ans=1;
        while(p--){
            ans*=2;
        }
        while(q--){
            ans+=2;
        }
        cout<<ans<<'
';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}