#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i += 1)
    {
        sum += v[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        int sum1 = sum(v, n);
        int sum2;
        int ans;
        for (int i = 0; i < n - 1; i += 1)
        {
            while (v[i] % 2 == 0)
            {
                v[i] /= 2;
                v[n - 1] *= 2;
                sum2 = sum(v, n);
                if (sum2 > sum1)
                {
                    ans = sum2;
                }
                else
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}