#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n, k;
        cin >> n >> k;

        string s;
        cin>>s;

        ll low = 0;
        ll high = n-1;

        ll count = 0;


        while (low < high)
        {
            if (s[low] != s[high])
            {
                count++;
            }
            low++;
            high--;
        }

        if (count >= k)
        {
            cout << "0" << endl;
        }

        else if(k>count)
        {
            
            cout <<k-count<< endl;
        }

        else{
            cout<<count-k<<endl;
        }


    }

    return 0;
}