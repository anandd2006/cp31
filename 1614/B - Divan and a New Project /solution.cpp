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
    int n;
    cin>>n;
    vector<int> v(n,0);
    map<int,int>m;
    for(int &x:v)cin>>x;
    vpii w;
    for(int i=0;i<n;i++){
        w.push_back({v[i],i+1});
    }
    sort(rall(w));
    vi ans(n+1);
    int assign=1;
    ll cost=0;
    for(int i=0;i<n;i++){
        int freq=w[i].first;
        int id=w[i].second;
        
        if(i%2==0)ans[id]=assign;
        else{
             ans[id]=-assign;
             assign++;
        }
        
        cost+=2ll*freq*abs(ans[id]);
    }
    cout<<cost<<"
";
    cout<<0<<' ';
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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