#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
ll area(vector<ll>&v,ll w,ll c){
    ll n=v.size();
    ll ans=0;
    for(ll x:v){
        ll current=(x+2*w)*(x+2*w);
        if(current>c||ans>c-current){
            return c+1;
        }
        ans+=current;
    }
    return ans;
}
 
void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(ll &x:v)cin>>x;
    ll l=1,r=1e9;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll a=area(v,mid,c);
        if(a==c){
            cout<<mid<<"
";
            return;
        }else if(a<c){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
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