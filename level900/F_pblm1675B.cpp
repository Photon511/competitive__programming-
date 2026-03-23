#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        long long operations = 0;
        bool flag = true;

        for(int i = n-2; i >= 0; i--){
            if(a[i+1] == 0){
                flag = false;
                break;
            }

            while(a[i] >= a[i+1]){
                a[i] /= 2;
                operations++;
             if(a[i] == 0){
                flag = false;
                    break;
                }
            }
            if(!flag) 
            break;
           }

        if(!flag)
            cout << -1 << endl;
        else
            cout << operations << endl;
    }
}