#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int x;
        cin>>x;
        int count=0;

        if(x%5!=0){
            cout<<"-1"<<endl;
        }

        else{

            if(x%10!=0){
                x-=5;
                count++;
            }
            if(x%10==0){
                while(x>=10){
                    count++;
                    x-=10;
                }
            }
            cout<<count<<endl;
        }
    }




    return 0;
}
