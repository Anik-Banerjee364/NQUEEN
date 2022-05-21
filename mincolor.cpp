#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x1, y1;
        cin >> x1 >> y1;
        int x2, y2;
        cin >> x2 >> y2;

        int parity1 = (x1 + y1) & 1;
        int parity2 = (x2 + y2) & 1;

        if (parity1 == parity2)
        {
            for (int i = 1; i <= n; i += 1)
            {
                for (int j = 1; j <= m; j++)
                {
                    int parity = (i + j) & 1;
                    if (i == x1 && j == y1)
                    {
                        cout << "1"
                             << " ";
                    }
                    else if (i == x2 && j == y2)
                    {
                        cout << "2"
                             << " ";
                    }
                    else if (parity == parity1)
                    {
                        cout << "1"
                             << " ";
                    }
                    else
                    {
                        cout << "3"
                             << " ";
                    }
                }
                cout << endl;
            }
        }

        else
        {
            for (int i = 1; i <= n; i += 1)
            {
                for (int j = 1; j <= m; j++)
                {
                    int parity = (i + j) & 1;
                    if (i == x1 && j == y1)
                    {
                        cout << "1"
                             << " ";
                    }
                    else if (i == x2 && j == y2)
                    {
                        cout << "2"
                             << " ";
                    }
                    else if (parity != parity1)
                    {
                        cout << "2"
                             << " ";
                    }
                    else
                    {
                        cout << "1"
                             << " ";
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}