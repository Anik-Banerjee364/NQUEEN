#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
        ll t;
        // cin>>t;
        t=1;
        while(t--){
            ll a1,a2,k1,k2,n;
            cin>>a1>>a2>>k1>>k2>>n;

            if(k2>k1){
                swap(k2,k1);
                swap(a2,a1);
            }
            ll maxima,minima;


            ll yc=a1*(k1-1)+a2*(k2-1);
            if((n-yc)<=0){
                minima=0;
                cout<<minima<<" ";
            }
            else{
                minima=n-yc;
                cout<<minima<<" ";
            }

           if(n<=a2*k2){
               maxima=floor(n/k2);
               cout<<maxima<<endl;
           }
           else{
               maxima=a2+((n-a2*k2)/k1);
               cout<<maxima<<endl;
           }

        
            
        }
    



    return 0;
}