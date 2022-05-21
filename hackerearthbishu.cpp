#include<bits/stdc++.h>
using namespace std;
void bishukills(int n, int arr[], int q,int power){
    int ind=upper_bound(arr,arr+n,power)-arr;
    ind--;
    cout<<(ind+1)<<" ";
    int sum=0;
    if(ind>=0){
    while(ind>=0){
        sum+=arr[ind];
        ind--;
    }
    cout<<sum<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    sort(arr,arr+n);
    int q;
    cin>>q;
    int brr[q];
    for(int i=0;i<q;i++){
        int power;
        cin>>power;
        brr[i]=power;

    }
    int count =0;
    while(q--){
        bishukills(n,arr,q,brr[count]);
        count++;
    }return 0;
}
