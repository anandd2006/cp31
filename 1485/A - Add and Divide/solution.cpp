#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll a,b;
    cin>>a>>b;
    if(a<b){
        cout<<1<<endl;
    }else{
        ll ans=INF;
        for(int i=0;i<=30;i++){
            ll bb=b+i;
            if(bb==1)continue;
            ll x=a;
            ll cnt=i;
            
            while(x>0){
                x/=bb;
                cnt++;
            }
            ans=min(ans,cnt);
            
        }
        cout<<ans<<"
";
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