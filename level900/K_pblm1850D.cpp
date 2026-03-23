#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int count = 1;
        int ans = 1;

        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i-1] <= k){
                count++;
            }
            else {
                ans = max(ans, count);
                count = 1;
            }
        }

        ans = max(ans, count); 

        cout << n - ans << endl; 
    }
}