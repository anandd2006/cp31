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
    string s;
    cin>>n>>s;
    int ans=0;
    
    vector<int> left(26,0),right(26,0);
    
    for(char c:s)right[c-'a']++;
    
    int l=0,r=0;
    
    for(int x:right)
        if(x>0)r++;
        
    for(int i=0;i<n-1;i++){
        int x=s[i]-'a';
        if(left[x]==0)
            l++;
        left[x]++;
        right[x]--;
        if(right[x]==0)
            r--;
        ans=max(ans,l+r);
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