#include<bits/stdc++.h>
using namespace std;
int main(){
    int N ;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
   
    for(int i=0;i<N;i++){
        if(A[i]==0){
            cout<<0<<endl;
            return 0;
        }
     }
    int minn=INT_MAX;
    for(int i=0;i<N;i++){ 
        minn=min(minn,abs(A[i]));
        }
      cout<<minn<<endl; 


    return 0;
     }
     

 
    
        
