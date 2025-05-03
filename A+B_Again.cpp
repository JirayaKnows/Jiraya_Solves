#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string x;
        cin >> x;
        int count = 0;
        for (int i = 0; i < 2; i++)
        {
            count += (x[i] - '0');
        }
        cout << count << endl;
    }
}