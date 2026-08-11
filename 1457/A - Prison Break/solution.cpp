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
 
int dist(int i, int j, int r, int c){
    return abs(r-i)+abs(c-j);
}
 
void solve() {
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    r--;
    c--;
    
    int ans=max({dist(0,0,r,c),
                dist(n-1,m-1,r,c),
                dist(n-1,0,r,c),
                dist(0,m-1,r,c)});
    cout<<ans<<"
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