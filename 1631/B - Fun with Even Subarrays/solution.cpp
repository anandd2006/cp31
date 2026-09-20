#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &x:v)cin>>x;
    int target=v[n-1];
    int length=1;
    int operations=0;
    while(length<n){
        int i=n-length-1;
        if(v[i]==target){
            length++;
        }else{
            operations++;
            length*=2;
        }
    }
    cout<<operations<<endl;
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