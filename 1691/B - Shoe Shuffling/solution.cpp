#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back({temp,i+1});
        m[temp]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second==1){
            cout<<-1<<"
";
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        if(v[i].first==v[i+1].first){
            swap(v[i].second,v[i+1].second);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    cout<<"
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