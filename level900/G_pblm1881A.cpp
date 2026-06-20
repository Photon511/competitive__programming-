#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        // If already present
        if (x.find(s) != string::npos) {
            cout << 0 << "\n";
            continue;
        }

        // Check character feasibility
        set<char> st(x.begin(), x.end());
        bool possible = true;
        for (char c : s) {
            if (!st.count(c)) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << -1 << "\n";
            continue;
        }

        string cur = x;
        for (int ops = 1; ops <= 10; ops++) {
            cur += cur;
            if (cur.find(s) != string::npos) {
                cout << ops << "\n";
                goto done;
            }
        }

        cout << -1 << "\n";
        done:;
    }
    return 0;
}

