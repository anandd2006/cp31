#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    string s;
    cin>>n>>s;
    stack<char> v;
    v.push(s[0]);
    for(int i=1;i<n;i++){
        if(!v.empty()&&v.top()=='('&&s[i]==')'){
            v.pop();
        }else{
            v.push(s[i]);
        }
    }
    cout<<v.size()/2<<"
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