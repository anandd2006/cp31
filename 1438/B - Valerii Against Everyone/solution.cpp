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
    vector<int> b(n,0);
    unordered_map<int,int> m;
    for(int &x:b){
        cin>>x;
        m[x]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        if((*it).second>=2){
            cout<<"YES
";
            return;
        }
    }
    cout<<"NO
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