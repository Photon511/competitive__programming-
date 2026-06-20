#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
           for (int j = i + 1; j < n; j++) {
                if ( (x<=sum-a[i]+a[j])&&(sum-a[i] + a[j] <=y)) {
                    count++;
                }
            }

                }
        cout << count << endl;
            }
                
            }
      
        

    
