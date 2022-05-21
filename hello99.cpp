#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio



    
        ll t;
        cin>>t;
        int x=0;
        while(t--){
            x++;

            ll n;
            cin>>n;
            string s;
            cin>>s;

            // vector<int>v;
            // v[0]=1;
            int count=1;
            cout<<"Case #"<<x<<":"<<" ";
            cout<<count<<" ";

            for(int i=1;i<n;i++){
                if(s[i]>s[i-1]){
                    count++;
                    cout<<count<<" ";
                }
                else{
                    count=1;
                    cout<<count<<" ";
                }
            }cout<<endl;
            
        }



    return 0;
}