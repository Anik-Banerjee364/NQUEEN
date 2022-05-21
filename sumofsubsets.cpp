#include<bits/stdc++.h>
using namespace std;

#define ll long long

int countsubsets(int arr[],int n,int sum){
    if(n==0)
    return(sum==0)?1:0;

    return countsubsets(arr,n-1,sum)+countsubsets(arr,n-1,sum-arr[n-1]);
}

int main(){
    
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum;
    cin>>sum;

    int z=countsubsets(arr,n,sum);
    cout<<z<<endl;

    //2^n time complexity
    



    return 0;
}