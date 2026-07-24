#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
void solve() {
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>v(n,0);
    for(int &x:v)cin>>x;
    long long sec=b;
    for(int x:v){
        sec+=min(a-1,x);
    }
    cout<<sec<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}