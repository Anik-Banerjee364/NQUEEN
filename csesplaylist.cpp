#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    ll n;
    cin>>n;

    vector<int>v;
    // map<int,bool>m;
    set<int>heard;
    // int j=0;
    ll count=0;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    

    ll j=0,i=0;
    while(j<n && i<n)

    {
        while(j<n && !heard.count(v[j])){

            heard.insert(v[j]);
            count =max(count,j-i+1);
            j++;


        }

     

            while(j<n && heard.count(v[j])){

                heard.erase(v[i]);
                i++;


            }
    }
                    cout<<count<<endl;



    return 0;
}