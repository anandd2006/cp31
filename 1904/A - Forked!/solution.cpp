#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
 
void solve() {
    int a,b;
    int kx,ky;
    int qx,qy;
    cin>>a>>b>>kx>>ky>>qx>>qy;
    vector<pair<int,int>> atk={
        {a,b},
        {a,-b},
        {-a,b},
        {-a,-b},
        {b,a},
        {b,-a},
        {-b,a},
        {-b,-a}
    };
    
    set<pair<int,int>> s;
    for(auto [dx,dy]:atk){
        s.insert({kx+dx,ky+dy});
    }
    
    set<pair<int,int>> t;
    for(auto [dx,dy]:atk){
        t.insert({qx+dx,qy+dy});
    }
    
    int ans=0;
    for(auto x:s){
        if(t.count(x))ans++;
    }
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}