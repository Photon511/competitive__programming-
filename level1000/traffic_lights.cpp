#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
     int n;
     char c;
     cin >> n >> c;
        
     string s;
        cin >> s;
  s = s + s;  
        int last = -1;
        int ans = 0;

        for (int i = 2*n - 1; i >= 0; i--) {
         if (s[i] == 'g') {
                last = i;
    }
     if (s[i] == c && i < n) {
              ans = max(ans, last - i);
      }
         }

 cout << ans << endl;
    }
}