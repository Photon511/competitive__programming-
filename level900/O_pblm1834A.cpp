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

        int neg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) neg++;
        }

        int sum = n - 2 * neg;
        int ops = 0;

        // Step 1: Fix sum
        if (sum < 0) {
            int need = (-sum + 1) / 2;  // ceil
            ops += need;
            neg -= need;
        }

        // Step 2: Fix product
        if (neg % 2 == 1) {
            ops++;
        }

        cout << ops << '\n';
    }

    return 0;
}
 o