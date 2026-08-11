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
    int n,k;
    string s;
    cin>>n>>k>>s;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='W'){
            sum++;
        }
        v.push_back(sum);
    }
    int ans=INT_MAX;
    int l=0,r=k-1;
    while(r<n){
        if(l==0){
            ans=min(ans,v[r]);
        }else{
            ans=min(ans,v[r]-v[l-1]);
        }
        
        l++;
        r++;
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