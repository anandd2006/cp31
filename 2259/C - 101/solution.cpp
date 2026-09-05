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
    vector<int> v(n);
    for(int &x:v)cin>>x;
    
    int i=0;
    while(i<n){
        if(v[i]==1 || v[i]==-1){
            v[i]=1;
            break;
        }
        i++;
    }
    i=n-1;
    while(i>=0){
        if(v[i]==1 || v[i]==-1){
            v[i]=1;
            break;
        }
        i--;
    }
    i=0;
    while(i<n){
        if(v[i]==-1){
            v[i]=0;
        }
        i++;
    }
    for(int x:v)cout<<x<<" ";
    cout<<'
';
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