#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
bool isprime(ll n){
    if(n<2)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }return true;
}
 
void solve() {
    ll d;cin>>d;
    vector<ll>arr;
    arr.push_back(1);
    arr.push_back(d+arr[0]);
    while(!isprime(arr[1])){
        arr[1]++;
    }
    arr.push_back(d+arr[1]);
    while(!isprime(arr[2])){
        arr[2]++;
    }
    cout<<arr[1]*arr[2]<<"
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