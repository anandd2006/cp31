#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
int sum(vector<int>& v){
    int ans=0;
    for(int &x:v)ans+=x;
    return ans;
}
 
void solve() {
    int n,q;
    cin>>n>>q;
        vector<ll> v(n, 0);
    for (ll &x : v) cin >> x;
 
    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + v[i];
    }
 
    ll total = pref[n];
 
 
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
 
        ll removed = pref[r] - pref[l - 1];
        ll added = 1LL * (r - l + 1) * k;
 
        ll newSum = total - removed + added;
 
        cout << (newSum % 2 ? "YES" : "NO") << "
";
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