#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
       int arr[n];
       long long prod=1;
       int ops=0;
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       for(int i=0;i<n;i++){
           prod= prod*arr[i];
       }
         int m=prod%k;
       if(m==0){
        cout<<"0";
       }
       else{
         cout<<m;
       }

    }
}