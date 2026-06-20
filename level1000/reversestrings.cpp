#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 1; i < n; i++) {
        if (s[i] < s[i - 1]) {
        cout << "YES"<<endl;
            cout << i << " " << i + 1 <<endl;
            return 0;       /*mistake  instead of return 0 used flag*/
        }
    }

    cout << "NO"<<endl;
           return 0;
}
