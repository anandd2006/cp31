#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin>>n;
    int m=n*(n-1)/2;
    vector<int> v(m);
    for(int &x:v)cin>>x;
    sort(all(v));
    int idx=0;
    vector<int> ans;
    for(int i=n-1;i>=1;i--){
        ans.push_back(v[idx]);
        idx+=i;
    }
    ans.push_back(1e9);
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<'
';
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