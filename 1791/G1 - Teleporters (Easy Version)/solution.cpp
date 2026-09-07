#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n,c;
    cin>>n>>c;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back({temp,i+1});
    }
    sort(v.begin(),v.end(),
    [](const pair<int,int> &x, const pair<int,int> &y){
        return (1ll*x.first+x.second)<(1ll*y.first+y.second);
    });
    int count=0;
    for(int i=0;i<n;++i){
        c-=(v[i].second+v[i].first);
        if(c<0){
            break;
        }
        count++;
    }
    cout<<count<<endl;
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