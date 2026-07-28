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
    vi v(n,0);
    for(int &x:v)cin>>x;
    sort(v.begin(),v.end());
    if(v[0]==v[n-1]){
        cout<<0<<"
";
        return;
    }
 
    unordered_map<int,int> m;
    for(int &x:v)m[x]++;
    int mf=0;
    for(auto it=m.begin();it!=m.end();it++){
        mf=max(mf,it->second);
    }
int cnt = mf;
int ans = 0;
 
while (cnt < n) {
    ans++;                  // clone
    int add = min(cnt, n - cnt);
    ans += add;             // replacements
    cnt += add;
}
 
cout << ans << "
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