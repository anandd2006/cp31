#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve()
{
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(ll &x:v)cin>>x;
   for(int i=1;i<=n;i++){
        v[i-1]=v[i-1]-i;
   }
   sort(all(v));
 
   int ans=1,cnt=1;
   for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1])continue;
        if(v[i+1]==v[i]+1){
            cnt++;
        }else{
            cnt=1;
        }
        ans=max(ans,cnt);
   }
   cout<<ans<<"
";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}