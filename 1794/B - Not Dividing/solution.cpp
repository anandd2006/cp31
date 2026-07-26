#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int &x:v){
        cin>>x;
        if(x==1)x++;
    }
 
    for (int i = 0; i < n - 1; i++) {
        if (v[i + 1] % v[i] == 0)
            v[i + 1]++;
    }
    for(int &x:v)cout<<x<<" ";
    cout<<endl;
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