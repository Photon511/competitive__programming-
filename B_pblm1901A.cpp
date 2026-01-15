#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) { //taking input the array of distance where feull tank is available 
            cin >> a[i];
        }

        int ans = a[0];  // distance from 0 to first station

        for (int i = 1; i < n; i++) { //finding the max distance between the gas fuel tank between 1 and n 
            ans = max(ans, a[i] - a[i - 1]);
        }

        // last segment: from last station to x and back
        ans = max(ans, 2 * (x - a[n - 1])); //comparing the max distance with the last gap and finfig the max of it 

        cout << ans << "\n";
    }

    return 0;
}
