/*#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a=1;
        long long b=n-1;
        long long new_a;
        long long new_b;
        long long lcmm=a*b;
          while(a<=b){
           long long lcm=(a*b)/gcd(a,b);
             if(lcm<=lcmm){
                lcmm=lcm;
                new_a=a;
                new_b=b;
             }
             
             a++;
             b--;
           
        }
        cout<<new_a<<" "<<new_b<<endl;
    }
}*/

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a = 1;

        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                if(i <= n/2) {
                    a = max(a, i);
                }
                if(n/i <= n/2) 
                {
                 a = max(a, n/i);
                }
            }
        }

        cout << a << " " << n - a << endl;
    }
}