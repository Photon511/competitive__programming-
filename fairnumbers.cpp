#include<bits/stdc++.h>
using namespace std;
bool fair (long long n){
    long long temp =n;
    while(temp>0){
        int d=temp%10;
        if(d!=0 && n%d!=0){
            return false;

    }
       temp=temp/10;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
     while(!fair(n)){
        n=n+1;
     }
     cout<<n<<endl;
    }
    return 0;   
}