#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    ll x,y;
    cin>>x>>y;

    if(x==0){
        if(y==1){
            cout<<0<<" "<<1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    
    }
    else if((y-x)==1){
        cout<<x<<"9"<<" "<<y<<"0"<<endl;
    }

    else if((y-x)==0){
        cout<<x<<"1"<<" "<<y<<"2"<<endl;
    }
    else if((y-x)>1 || (x-y)>1 || x>y){

        if(x==9 && y==1){
            cout<<9<<" "<<10<<endl;
        }else{
        cout<<"-1"<<endl;
        }
    }



    return 0;
}