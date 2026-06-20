#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
     cin>>t;
    while(t--){
        int N;
        int D;
        cin>>N>>D;
        vector<int>P;
        int count=0;
        for(int i=0;i<N;i++){
            cin>>P[i];
        }
        int j=N-1;
        sort(P.begin(),P.end());
       while(N>0){
        int i=1;
        if((i*P[j])>D){
            P[j]=P[j-1];
            count++;
            N=N-i-1;
            i=1;

        }
        else{
            i++;
        }
       }
        cout<<count<<endl;

    }
}

