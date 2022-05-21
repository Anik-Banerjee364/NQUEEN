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

            string s;
            cin>>s;

            ll count0=0;
            ll count1=0;

            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    count0++;
                }
                else{
                count1++;
                }
            }

            ll f=-1;
            int arr[n]={0};
            int k=0;
            

            for(int i=0;i<count0;i++){
                if(s[i]=='1'){
                    arr[k++]=i+1;
                    f=1;
                }
            }

            for(int i=count0;i<n;i++){
                if(s[i]=='0'){
                    arr[k++]=i+1;
                    f=1;
                }
            }

            if(f==-1){
                cout<<'0'<<endl;;
            }
            else{
                cout<<"1"<<endl;
            }   
                if(k){
                cout<<k<<" ";

            
            for(int i=0;i<n;i++){
                if(arr[i]){
                    cout<<arr[i]<<" ";
                }
            }
                cout<<endl;
                }

            
        }



    return 0;
}