#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        map<long long,long long>mapp;
        for(long long i=0;i<n;i++){
            mapp[a[i]]++;
        }
        long long max_freq =0;
        for (auto it :mapp){
            max_freq=max(max_freq,it.second);

        }
        long long ops=0;
        while(max_freq<n){
            ops++;
            if(max_freq*2<=n){
                ops=ops+max_freq;
                max_freq=max_freq*2;
        
            }
            else {
                ops+=n-max_freq;
                max_freq=n;
            }
        }
           cout<<ops<<endl;

    }
    return 0;
}