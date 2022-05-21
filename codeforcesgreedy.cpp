#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a;
        int b;
        int c;
        cin >> n;
        int temp = n;
        for (a = 2; a * a * a <= n; a++)
        {

            if (n % a == 0)
            {
                break;
            }
        }

        int now = n / a;
        for (b = a + 1; b * b <= now; b++)
        {

            if (now % b == 0)
            {
                c = now / b;
                if (b >= c)
                {
                    c = -1;
                }
                break;
            }
        }
        if (a * b * c == n)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}