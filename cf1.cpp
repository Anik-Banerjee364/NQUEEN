#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
        ll t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            map<int,int>m;
            int h=-1;

            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                m[x]++;
                h=max(h,m[x]);
            }

            if(h==n){
                cout<<0<<endl;
            }
            else{
                int count=1;
                while(h<=n){
                if(2*h>=n){
                    count+=(n-h);
                    break;
                }
                count+=h;
                h*=2;
                count++;
                }
                cout<<count<<endl;
            }
        }
    return 0;
}