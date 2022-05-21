#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b,x,y;
        cin>>n>>b>>x>>y;
        int arr[n+1];
        arr[0]=0;

        ll sum=0;

        for(int i=1;i<=n;i++){
            if((arr[i-1]+x)>=(arr[i-1]-y)){
                if((arr[i-1]+x)<=b){
                    arr[i]=arr[i-1]+x;
                }
                else{
                    arr[i]=arr[i-1]-y;
                }
            }

            else {

                if((arr[i-1]-y)<=b){
                    arr[i]=arr[i-1]-y;
                }
                else{
                    arr[i]=arr[i-1]+x;
                }
            }
        }

        for(int i=0;i<=n;i+=1){
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}