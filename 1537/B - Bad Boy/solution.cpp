#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
int dist(int a,int b,int c,int d){
    return abs(c-a)+abs(d-b);
}
 
void solve() {
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    
    int d1=dist(i,j,1,1)+dist(1,1,n,m)+dist(n,m,i,j);
    int d2=dist(i,j,1,m)+dist(1,m,n,1)+dist(n,1,i,j);
    
    if (d1 >= d2)
        cout << 1 << " " << 1 << " " << n << " " << m << "
";
    else
        cout << 1 << " " << m << " " << n << " " << 1 << "
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