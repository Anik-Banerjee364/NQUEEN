
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll odd = 0;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] - '0') & 1)
                odd++;
        }
        if (odd <= 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            int count = 0;
            for (char c : s)
            {
                if ((c - '0') & 1)
                {
                    cout << c;
                    count++;
                }
                if (count == 2)
                {
                    cout<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}