#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp=s;
        sort(temp.begin(),temp.end());
        int high=n-1;
        int low=0;
        int count=0;
        int f=-1;
        if(temp==s){
            cout<<"YES"<<endl;
        }else{
        while(low<high){
            if(s[low]>s[high]){
            swap(s[low],s[high]);
            }
            count++;
            high--;
            low++;
            if(s==temp){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        
            if(f==-1){
                cout<<"NO"<<endl;
            }
        }


    }

    return 0;
}