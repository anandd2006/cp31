#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans=0;
        int n, x;
        cin >> n>> x;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            ans = max(v[0], 2 * (x - v[0]));
 
        }
        else
        {
            vector<int> comp;
            comp.push_back(v[0]);
            for (int i = 1; i < n; i++)
            {
                if(i==n-1){
                    comp.push_back(2*(x-v[n-1]));
                }
                comp.push_back(v[i]-v[i-1]);
            }
            for(int x:comp){
                ans=max(ans,x);
            }
        }
        cout<<ans<<"
";
    }
}