#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;
        int m=min(n,k);
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
     }
        for(int i=0;i<n;i++){
                cin>>b[i];
        }
        int ans=0;
        int sum=0;
        int maxx=INT_MIN;

        for(int i=0;i<m;i++){
            sum=sum+a[i];
            maxx=max(maxx,b[i]);
             ans = max(ans,sum + (k-(i+1))*maxx);
        }
    
         cout<<ans<<endl;
} 
}