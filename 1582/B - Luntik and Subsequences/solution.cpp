#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
 
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
 
ll nCr(int n,int r){
    if(r>n)return 0;
    if(r>n-r)r=n-r;
    ll res=1;
    for(int i=1;i<=r;i++){
        res=res*(n-r+i)/i;
        
    }return res;
}
 
void solve() {
    int n;
    cin>>n;
    vi v(n,0);
    int n0=0,n1=0;
    for(int &x:v){
        cin>>x;
        if(x==1)n1++;
        if(x==0)n0++;
    }
    ll sum =0;
    for(int i=0;i<=n0;i++){
        sum+=nCr(n0,i);
    }
    cout<<sum*n1<<"
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