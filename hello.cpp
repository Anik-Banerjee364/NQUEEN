#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;

        if(x==0 && y==0){
            cout<<"0"<<endl;
            
        }
        else{

        ll result=pow(x,2)+pow(y,2);
        d final=sqrt(result);
        if(floor(final)==final){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
        
        }


        
    }



    return 0;
}