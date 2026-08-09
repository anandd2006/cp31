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
    int n,d;
    cin>>n>>d;
    vector<int> v(n,0);
    for(int &x:v)cin>>x;
    sort(all(v));
    int r=n-1,ans=0,l=0;
    while(l<=r){
        int people=d/v[r]+1;
        if(l+people-1<=r){
            ans++;
            l=l+people-1;
            r--;
        }else{
            break;
        }
    }
    cout<<ans<<"
";
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}