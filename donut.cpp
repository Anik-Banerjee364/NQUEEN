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

            ll a,b,c;

            cin>>a>>b>>c;
            double h=c/b;

            if(a<c){
                cout<<1<<" ";
            }
            else{
                cout<<-1<<" ";
            }
            if(h<a){
                cout<<b<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    



    return 0;
}