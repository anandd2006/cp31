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
 
double dist(pii d1, pii d2){
    return sqrt(
        1.0 * (d2.first-d1.first) * (d2.first-d1.first) +
        1.0 * (d2.second-d1.second) * (d2.second-d1.second)
    );
}
 
double area(double a, double b, double c){
    double s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
 
void solve() {
    int w,h;
    cin>>w>>h;
 
    vector<pii> h1,h2;
    vector<pii> v1,v2;
 
    int lh1,lh2,lv1,lv2;
 
    cin>>lh1;
    for(int i=0;i<lh1;i++){
        int temp;
        cin>>temp;
        h1.push_back({temp,0});
    }
 
    cin>>lh2;
    for(int i=0;i<lh2;i++){
        int temp;
        cin>>temp;
        h2.push_back({temp,h});
    }
 
    cin>>lv1;
    for(int i=0;i<lv1;i++){
        int temp;
        cin>>temp;
        v1.push_back({0,temp});
    }
 
    cin>>lv2;
    for(int i=0;i<lv2;i++){
        int temp;
        cin>>temp;
        v2.push_back({w,temp});
    }
 
    double ans=0;
 
    double a=dist(h1[lh1-1],h1[0]);
    for(int i=0;i<lh2;i++){
        double b=dist(h2[i],h1[lh1-1]);
        double c=dist(h2[i],h1[0]);
        double s=area(a,b,c);
        ans=max(ans,s);
    }
 
    a=dist(h2[lh2-1],h2[0]);
    for(int i=0;i<lh1;i++){
        double b=dist(h1[i],h2[lh2-1]);
        double c=dist(h1[i],h2[0]);
        double s=area(a,b,c);
        ans=max(ans,s);
    }
 
    a=dist(v2[lv2-1],v2[0]);
    for(int i=0;i<lv1;i++){
        double b=dist(v1[i],v2[lv2-1]);
        double c=dist(v1[i],v2[0]);
        double s=area(a,b,c);
        ans=max(ans,s);
    }
 
    a=dist(v1[lv1-1],v1[0]);
    for(int i=0;i<lv2;i++){
        double b=dist(v2[i],v1[lv1-1]);
        double c=dist(v2[i],v1[0]);
        double s=area(a,b,c);
        ans=max(ans,s);
    }
 
       cout << (ll)round(2 * ans) << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}