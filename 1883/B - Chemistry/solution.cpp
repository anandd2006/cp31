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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(char c:s)freq[c-'a']++;
    int odd=0;
    for(int &x:freq)
        if(x%2)odd++;
    cout<<((odd-k<=1)?"YES
":"NO
");
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}