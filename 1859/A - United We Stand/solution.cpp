#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int &x:a){
        cin>>x;
    }
    sort(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout<<-1<<endl;
        return;
    }else{
        vector<int> b,c;
 
        for (int x : a) {
    if (x == a[0])
        b.push_back(x);
    else
        c.push_back(x);
}
 
if (c.empty()) {
    cout << -1 << "
";
    return;
}
        cout<<b.size()<<" "<<c.size()<<endl;
        for (int x : b) cout << x << " ";
        cout << "
";
        for (int x : c) cout << x << " ";
        cout << "
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}