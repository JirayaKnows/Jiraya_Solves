#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> p(n);
        for (i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].second;
        }
        sort(p.begin(), p.end());
        for (i = 0; i < n; i++)
        {
            if (p[i].first == p[i + 1].first)
            {
                swap(p[i].second,p[i+1].second);
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << p[i].first << " " << p[i].second << endl;
        }
    }
}
