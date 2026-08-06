#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    vi v(n,0);
    for(int &x:v){
        cin>>x;
    }
    int count=0;
    vector<int> a;
    for (int i = 0; i < n; i++) {
    if (v[i] <= q) {
        count++;
    } else {
        if (count >= k)
            a.push_back(count);
        count = 0;
    }
}
    if (count >= k)
    a.push_back(count);
    ll sum=0;
    for(int &l:a){
        int x=l-k+1;
        sum += 1LL * x * (x + 1) / 2;
    }
    cout<<sum<<endl;
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