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
            int arr[n]={0};

            for(int i=0;i<n;i++) arr[i]=i+1;
            if(n%2==0){
                for(int i=0;i<n;i+=2){
                    swap(arr[i],arr[i+1]); 
                }

                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }cout<<endl;
            }
            else{
                if(n<5){
                    cout<<"-1"<<endl;
                }
                else{
                    arr[0]=4;
                    arr[1]=1;
                    arr[2]=2;
                    arr[3]=5;
                    arr[4]=3;

                    for(int i=5;i<n;i+=2){
                        swap(arr[i],arr[i+1]);
                    }

                    for(int i=0;i<n;i++){
                        cout<<arr[i]<<" ";
                    }cout<<endl;
                }
            }
        }
    



    return 0;
}