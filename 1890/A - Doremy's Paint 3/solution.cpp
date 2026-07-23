#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<int> v(n);
        unordered_map<int,int> m;
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        
        if (m.size() == 1) {
            cout << "YES
";
        }
        else if (m.size() > 2) {
            cout << "NO
";
        }
        else {
            auto it1 = m.begin();
            auto it2 = next(it1);
        
            if (abs(it1->second - it2->second) <= 1)
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
    return 0;
}