#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int closest = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        closest = min(closest, abs(x));
    }
 
    cout << closest << endl;
 
    return 0;
}