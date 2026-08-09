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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
 
    if(s < k*b || s > k*b + n*(k-1)){
        cout<<-1<<"
";
        return;
    }
 
    vector<ll> v(n,0);
 
    v[0] = k*b;
 
    ll rem = s - k*b;
 
    v[0] += min(rem,k-1);
    rem -= min(rem,k-1);
 
    int i=1;
 
    while(i<n && rem>0){
        v[i] = min(rem,k-1);
        rem -= v[i];
        i++;
    }
 
    for(ll &x:v){
        cout<<x<<" ";
    }
    cout<<"
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