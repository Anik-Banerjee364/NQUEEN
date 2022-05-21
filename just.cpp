#include<bits/stdc++.h>
using namespace std;

#define ll long long
    
string dec_to_bin(int c)
{
    string str="";
    while(c>0){
        if(c%2==0){
            str='0'+str;

        }
        else{
            str='1'+str;
        }
        c=c/2;
    }
    return str;
}
    

ll convertBack(string s) {
    ll n = 0 , p = 1;
    for (ll i = s.length() - 1; i >= 0; i--) {
        n += ((s[i] - '0') * p);
        p *= 2;
    }
    return n;
}
int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio
    
    
        ll t;
        cin>>t;
        while(t--){
            int c;
            cin>>c;
            string bin=dec_to_bin(c);

            int z=bin.length();
            string a="";
            string b="";

            a+='1';
            b+='0';

            for(int i=1;i<z;i++){
            if(bin[i]=='1'){
                a+='0';
                b+='1';
            }
            else{
                a+='1';
                b+='1';
            }

        }

        ll final_a=convertBack(a);
        ll final_b=convertBack(b);

        ll ans=final_a*final_b;

        cout<<ans<<endl;





        }


    



    return 0;
}