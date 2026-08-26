#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin >> n;
 
    vector<pair<int,int>> a;
 
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back({temp, i});
    }
 
    sort(all(a));
 
    ll sum = 0;
    vector<ll> pref;
 
    for (int i = 0; i < n; i++) {
        sum += 1LL * a[i].first;
        pref.push_back(sum);
    }
 
    vector<int> ans(n, 0);
 
    int reach = 0;
 
    for (int i = 0; i < n; i++) {
        reach = max(reach, i);
 
        while (reach + 1 < n && pref[reach] >= a[reach + 1].first) {
            reach++;
        }
 
        ans[a[i].second] = reach;
    }
 
    for (int x : ans) cout << x << " ";
    cout << "
";
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