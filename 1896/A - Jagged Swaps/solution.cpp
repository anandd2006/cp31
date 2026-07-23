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
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int minel=n;
        for(int x:v){
            minel=min(minel,x);
        }
        if(minel!=v[0]){
            cout<<"NO
";
        }else{
            cout<<"YES
";
            
        }
    }
    return 0;
}