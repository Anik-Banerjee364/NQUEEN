#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    ll n,m;
    cin>>n>>m;

    int a[n]={0};
    int b[m]={0};

    int c[m+n+1];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int i=0;
    int j=0;

    int k=0;
    // int result[m+n+1];
    // int count=0;


    // while(i<n|| j<m){
    //     if(j==m || (i<n && a[i]<b[j])){
    //         i++;
           
    //     }
    //     else{
    //         result[j]=i;
    //         j++;
    // //         k++;
    //     }
    // }

    // for(int i=0;i<m;i++){
    //     cout<<result[i]<<" ";
    // }
    // int count=0;
    // for(int j=0;j<m;j++){
    //     while(i<n||j<m){
    //         if(j==m || (i<n && a[i]==b[j])){
    //             count++;
    //             i++;
    //         }
    //         else{
    //             break;
    //         }
            // else{
            //     result[k]=i;
            //     k++;
            //     break;
            // }
        // }
        // result[k]=count;
        // k++;
    // }

    // for(int i=0;i<m;i++){
    //     cout<<result[i]<<" ";
    // }

    // cout<<count<<endl;

    




    return 0;
}