#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        if(n < 2) {
            cout << 0 << "\n";
            continue;
        }

        int min_so_far = a[0];
        int ans = 0;   // initialize with 0

        for(int i = 1; i < n; i++) {
            ans = max(ans, a[i] - min_so_far);
            min_so_far = min(min_so_far, a[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}

