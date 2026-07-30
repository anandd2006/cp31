#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const int INF = 1e9;
const int MOD = 1e9 + 7;
 
int func(string s, char a, char b){
 
    int del=0;
    int i = s.size()-1;
    
    while (i>=0&&s[i]!=b){
        del++;
        i--;
    }
    if(i<0){
        return INF;
    }
    
    i--;
    
    while(i>=0&&s[i]!=a){
        del++;
        i--;
    }
    if(i<0){
        return INF;
    }
    return del;
    
}
 
void solve() {
    long long n;
    cin>>n;
    string s=to_string(n);
 
    
    int ans = min({
    func(s,'5','0'),
    func(s,'0','0'),
    func(s,'2','5'),
    func(s,'7','5')
});
    cout << ans << "
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