#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
          long long sum=0;
          long long max_sum=0;
        for(int i=1;i<n;i++){
        if  (a[i]%2!=a[i+1]%2){
            sum =sum + a[i]+a[i+1];
        
         max_sum=max(sum,max_sum);
        } 
        
      else {
        max_sum=max(sum,a[i]);
      }
         
    }
    cout<<max_sum<<endl;
    }
}