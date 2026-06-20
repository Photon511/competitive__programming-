#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
         for(int i=0;i<n;i++){
            cin>>a[i];
         } 
         int odd_count=0;
         for(int i=0;i<n;i++){
           if(a[i]%2==1){
                odd_count++;
            }
         }
            if(odd_count%2==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        } 
        return 0;
}