#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    int i=1;
    while(i<=n){
        if(s[i-1]=='0'){
            ans++;
            i+=k-((i-1)%k);
            continue;
        }
        i++;
    }
    int total =n/k;
    cout<<total-ans<<"
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