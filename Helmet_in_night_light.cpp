#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];  
    }
     for(int i=0;i<n;i++){
            cin>>b[i];
}
   vector<int> c(n);
   for(int i=0;i<n;i++){
       c[i]=a[i]*b[i];
   }
    sort(c.begin(),c.end());

    int ans=p;
    int count=n-1;
    for(int i=0;i<=n;i++){
       
        ans=ans+c[i];
        count=count+a[i];
    } 
        cout<<ans<<endl;
}

    }
    

