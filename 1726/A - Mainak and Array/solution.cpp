#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int &x:v)cin>>x;
    int ans=v[n-1]-v[0];
    for(int i=1;i<n;i++){
        ans=max(ans,v[i]-v[0]);
    }
    for(int i=0;i<n-1;i++){
        ans=max(ans,v[n-1]-v[i]);
    }
    for(int i=0;i<n-1;i++){
        ans=max(ans,v[i]-v[i+1]);
    }
    cout<<ans<<endl;
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