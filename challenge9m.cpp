#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define kp cout<<"Case #"<<x<<": "<<

int main(){
    int x=1;
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        ll sum=0;

        int os=n.size();

        for(int i=0;i<os;i++){
            sum+=(n[i]-'0');
        }

        if(sum%9==0){
            n.insert(n.begin()+1,'0');
            kp n<<endl;
            x++;
        }

        else{
            int rem=sum%9;
            int extra=9-rem;
            for(int i=0;i<n.size();i+=1)

            {
                if(extra<n[i]-'0'){
                    n.insert(n.begin()+i,extra+'0');
                    break;

                }
            }

            if(n.size()==os){
                n.push_back(extra+'0');
                 cout<<"Case #"<<x<<": "<<n<<endl;
                 x++;
            }
            else{
                 cout<<"Case #"<<x<<": "<<n<<endl;
                 x++;
            }
            

        }
        

    }
    return 0;
}