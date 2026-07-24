#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    for(int &x:v)cin>>x;
    sort(v.begin(),v.end());
    int lcs=1;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])>k)count=1;
        else count++;
        lcs=max(lcs,count);
    }
    cout<<n-lcs<<"
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