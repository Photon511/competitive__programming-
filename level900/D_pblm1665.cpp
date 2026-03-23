#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        unordered_map<long long, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int maxx= 0;
        for (auto &p : freq) {
            maxx = max(maxx, p.second);
        }

        if (maxx == n) {
            cout << 0 << "\n";
            continue;
        }

        int ops = 0;
        int curr = maxx;

        while (curr < n) {
            ops++;  
            int add = min(curr, n - curr);
            ops += add;  
            curr+= add;
        }

        cout << ops << "\n";
    }

    return 0;
}