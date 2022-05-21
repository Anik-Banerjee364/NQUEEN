#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x=1;
    while(t--){
        string in,p;
        cin>>in;
        cin>>p;
        int count=0;
        map<char,int>m1;
        map<char,int>m2;
        int size1=in.size();
        int size2=p.size();
        // cout<<size1<<endl;
        string str="";
        int difference=size2-size1;
        string temp=in;
        for(int i=1;i<=difference;i++){
            temp=temp+" ";
        }

       
        
        // for(int i=0;i<size1;i++){
        //     for(int j=0;j<size2;j++){
        //         if(in[i]==p[j]){
        //             continue;
        //         }
        //         else{
        //             count++;
        //             j++;
        //         }
        //     }
        // }
                int i=0;
              for(int j=0;j<size2;j++){
                  
                  if(temp[i]==p[j]){
                      str+=p[j];
                      i++;
                      continue;
                  }
                  else{
                      count++;
                  }
                  
              
          }

           if(str==in){
               cout<<"Case #"<<x<<": "<<count<<endl;
               x++;
           }
           else if(str!=in || size2<size1){
               cout<<"Case #"<<x<<": "<<"IMPOSSIBLE"<<endl;
               x++;
           }
    }



    return 0;
}