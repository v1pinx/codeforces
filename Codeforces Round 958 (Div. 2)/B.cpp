#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int a = 0;
        int b = 0;
        int i = -1;
        int j = -1;
        for (int k = 0; k < s.size(); k++)
        {
            if (s[k] - '0')
            {
                b++;
            }
            else
            {
                a++;
            }
            if (b > a)
            {
                i = k;
                break;
            }
        }

        a = 0;
        b = 0;
        for (int k = n - 1; k >= 0; k--)
        {
            if (s[k] - '0')
            {
                b++;
            }
            else
            {
                a++;
            }
            if (b > a)
            {
                j = k;
                break;
            }
        }

        if (i == -1 || j == -1)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
}