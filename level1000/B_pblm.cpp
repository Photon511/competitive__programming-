#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int> > arr(n, vector<int>(m));

        long long sum = 0;
        int neg_count = 0;
        int mini = INT_MAX;

        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];

                if(arr[i][j] < 0) neg_count++;

                int val = abs(arr[i][j]);
                sum += val;
                mini = min(mini, val);
            }
        }

       
        if(neg_count % 2 == 0){
            cout << sum << endl;
        }
        else{
            cout << sum - 2LL * mini << endl;
        }
    }
}