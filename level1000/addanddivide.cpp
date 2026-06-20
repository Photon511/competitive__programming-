#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
      int ans=INT_MAX;
      for(int i=0;i<32;i++){
        long long ops=i;
        long long nb=b+i;
        if(nb==1){
            continue;
        }
        long long na=a;
        while(na>0){
            na=na/nb;
            ops++;
        }
        ans=min(ans,(int)ops);
      }
     cout<<ans<<endl;
      }
   
       }
