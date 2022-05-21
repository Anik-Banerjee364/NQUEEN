#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
        ll t;
        cin>>t;
        int x=1;
        while(t--){

           ll r,a,b;
            cin>>r>>a>>b;

            ll reqd;

            reqd=r;

            vector<ll>v;
            ll count=2;
            v.push_back(reqd);


            while(reqd!=0){
                if(count%2==0){
                    reqd=reqd*a;
                    v.push_back(reqd);
                    count++;
                }
                else{
                    reqd=reqd/b;
                    if(reqd>0){
                    v.push_back(reqd);
                    count++;
                    }
                    else{
                        break;
                    }
                }

            }
            double area=0.0;
            for(auto it:v){
                area+=2*acos(0.0)*it*it;
            }
            cout<<"Case #"<<x<<":"<<" "<<setprecision(10)<<area<<endl;
            x++;



            
            
        }
    



    return 0;
}