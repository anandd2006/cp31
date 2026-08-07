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
    vector<int> a(n,0),b(n,0);
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    
    map<int,int> ma,mb;
    ma[a[0]] = max(ma[a[0]], 1);
    int count=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            count++;
        }else{
            count=1;
        }
        ma[a[i]]=max(ma[a[i]],count);
    }
    mb[b[0]] = max(mb[b[0]], 1);
    count=1;
    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]){
            count++;
        }else{
            count=1;
        }
        mb[b[i]]=max(mb[b[i]],count);
    }
    
    int ans=0;
    
    for(auto [x,cnt]:ma){
        ans=max(ans,cnt+mb[x]);
    }
    for(auto [x,cnt]:mb){
        ans=max(ans,cnt+ma[x]);
    }
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