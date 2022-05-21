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

        string str="";
        int a=0;
        int b=0;
        for(int i=0;i<n;i+=1){

            str+=s[i];
            if(str=="()"||str=="))"||str=="(("){
                a++;
                b=b+2;
                str="";
            }

            else {
                if(str.size()>1){
                    if(s[i]==')'){
                        a++;
                        b=b+str.size();
                        str="";

                    }
                }
            }

        }

        int left=n-b;
        cout<<a<<" "<<left<<endl;
    }



    return 0;
}