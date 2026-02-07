#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int total2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) total2++;
        }

        // If total number of 2s is odd, impossible
        if (total2 % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        int need = total2 / 2;
        int pref2 = 0;
        int ans = -1;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) pref2++;
            if (pref2 == need) {
                ans = i + 1; // k is 1-based
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
