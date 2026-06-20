#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
         for(long long i=1;i<n;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                 
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
}