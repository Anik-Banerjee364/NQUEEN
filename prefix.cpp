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
    ll n,k;
    cin>>n>>k;
    ll arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

        sort(arr,arr+n);

        int i=0,j=0,f=-1;;

        while(i<n && j<n){
            if(k==abs(arr[j]-arr[i])){
                cout<<"YES"<<endl;
                f=0;
                break;
            }
            else if(k>abs(arr[j]-arr[i])){
                j++;
            }
            else{
                i++;
            }
        }
        if(f==-1){
            cout<<"NO"<<endl;
        }



        
    
}
    

    return 0;
}