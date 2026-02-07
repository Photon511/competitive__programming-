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

    int ops=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1])
        {
            int diff =a[i+1]-a[i];
            int req_ops =diff/2 +1;
            ops=min(ops,req_ops);
        }
        else{
            ops=0;
        }
        }
    cout<<ops<<endl;
    }   
    return 0;
     }