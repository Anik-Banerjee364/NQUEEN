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
            ll oddcount=0;
            ll evencount=0;
            int newarr[n];
            int f=-1;

            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
                if(arr[i]%2==0){
                    evencount++;
                }
                else{
                    oddcount++;
                }
            }

            if(oddcount%2!=0 && evencount==0){
                cout<<"-1"<<endl;

            }
            else if(oddcount%2==0 && oddcount!=0){
                f=0;
                int j=0;
                int k=n-1;
                for(int i=0;i<n;i++){
                    if(arr[i]%2==0){
                        newarr[k]=arr[i];
                        k--;
                    }
                    else{
                        newarr[j]=arr[i];
                        j++;
                    }
                }
            }

            else if(oddcount%2!=0 && evencount!=0 && oddcount>1){
                f=0;
                ll req=oddcount-1;
                int j=0;
                int k=n-2;

                for(int i=0;i<n;i++){
                    if(arr[i]%2==0){
                        newarr[k]=arr[i];
                        k--;
                    }

                   else if(req>0 && arr[i]%2==1){
                        newarr[j]=arr[i];
                        j++;
                        req--;
                    }

                    else if(req==0 && arr[i]%2==1){
                        newarr[n-1]=arr[i];
                    }
                }
                }
                else if(oddcount==1){
                    cout<<"-1"<<endl;
                }
                else{
                    cout<<"-1"<<endl;
                }

                    
                    if(f==0){
                        for(int i=0;i<n;i++){
                            cout<<newarr[i]<<" ";
                        }cout<<endl;
                    }






            }
        



    return 0;
}