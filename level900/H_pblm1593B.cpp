#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        int count =0;
        if(n<25){
            cout<<"0"<<endl;
        }
        if(n%10!=0 && n%10!=5){
            n=n/10;
            count++;
     }
       int m=100;
        if(n%10==0){
            int m=100;
            while(n%m!=0 || n%m!=5){
                count++;
                m=m*10;     
            }
        }
        if(n%10==5){
            while(n%m!=2 || n%m!=7){
                count++;
                m=m*10; 

            }
        }
        cout<<count<<endl;
    }   
    return 0;
}
