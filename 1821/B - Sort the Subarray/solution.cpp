#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    int l=0,r=n-1;
    while(a[l]==b[l]){
        l++;
    }
    while(a[r]==b[r]){
        r--;
    }
    while(l>0&&b[l]>=b[l-1]){
        l--;
    }
    while(r<n-1&&b[r]<=b[r+1]){
        r++;
    }
    cout<<l+1<<" "<<r+1<<"
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