#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); // fastio

    ll t;
    cin >> t;
    while (t--)
    {

        ll n, q;
        cin >> n >> q;
        ll arr[n + 2];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        // ll l,r;
        // cin>>l>>r;

        ll pre[n + 2], suff[n + 2];

        pre[0] = suff[n + 1] = 0;

        for (int i = 1; i <= n; i++)
        {
            pre[i] = gcd(pre[i - 1], arr[i]);
        }

        for (int i = n; i >= 0; i--)
        {

            suff[i] = gcd(arr[i], suff[i + 1]);
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll d = gcd(pre[l - 1], suff[r + 1]);
            cout << d << endl;
        }
    }

    return 0;
}