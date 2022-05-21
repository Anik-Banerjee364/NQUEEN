#include<bits/stdc++.h>
using namespace std;

#define ll long long

void display(int arr[],int n){

    int x=0;
    for(int i=0;i<n;i++){
        x^=abs(arr[i]-(i+1));
    }
    if(x==0){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}



void good(){
    ll n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }

    cout<<"The good permutations are "<<endl;

    do{
        int f=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==i+1){
                f=0;
                break;
            }
        }
        if(f==-1){
            display(arr,n);

        }
    }while(next_permutation(arr,arr+n));

}

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
        ll t;
        cin>>t;
        while(t--){
            good();

            
        }
    



    return 0;
}