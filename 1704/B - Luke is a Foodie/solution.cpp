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
    int n,x;
    cin>>n>>x;
    vi v(n);
    for(int &y:v)cin>>y;
    int ans=0;
    int l=v[0]-x,r=x+v[0];
    for(int i=1;i<n;i++){
        l=max(l,v[i]-x);
        r=min(r,x+v[i]);
        if(l>r){
            
            ans++;
            l=v[i]-x;
            r=x+v[i];
        }
      
    }
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}