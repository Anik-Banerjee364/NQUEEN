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

            int m=5;
            int f=-1;

            // vector<vector<int>>arr(n,vector<int>(m));
            int arr[n][m];

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>arr[i][j];
                }
            }

                for(int d1=0;d1<m;d1++){
                    for(int d2=d1+1;d2<m;d2++){
                        int count1=0;
                        int count2=0;
                        int common=0;

                        for(int i=0;i<n;i++){
                            if(arr[i][d1])
                            count1++;
                            if(arr[i][d2])
                            count2++;
                            if(arr[i][d1]&&arr[i][d2])
                            common++;
                        }

                        if(count1>=n/2 && count2>=n/2 && count1+count2-common==n ){
                            f=0;
                            cout<<"YES"<<endl;
                        }


                    }
                }

                if(f==-1){
                    cout<<"NO"<<endl;
                }
            
        }
    



    return 0;
}