#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
 
void solve() {
    int n, a, b;
    cin>>n>>a>>b;
    if(a==n&&b==n){
        cout<<"Yes"<<"
";
    }else {
        cout<<(a+b<=n-2 ? "Yes":"No")<<"
";
    }
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}