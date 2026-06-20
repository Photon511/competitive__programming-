/*#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin >> t;
    while (t--) {
        int n;
         cin >> n;
     string s;
     cin >> s;
         int count_ones = 0;
        for (char c : s) if (c == '1')
                 count_ones++;
             int i = 0;
            int student_add = 0;
       while (i < n) {
            if (s[i] == '1') {
                    i++;
                continue;
     }

       int j = i;
         while (j < n && s[j] == '0')
                   j++;
                int len = j - i;

           bool left_one = (i > 0 && s[i-1] == '1');
           bool right_one = (j < n && s[j] == '1');

          if (!left_one && !right_one) {
               student_add += (len + 1) / 2;
          } 
            else if (left_one && right_one) {
               student_add += (len - 1) / 2;
         } 
           else 
             {
                student_add += (len - 1) / 2;
          }
                    i = j;
        }

        cout << count_ones + student_add <<endl;
    }

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count_ones = 0;
        for (char c : s) 
            if (c == '1') count_ones++;

        int i = 0;
        int student_add = 0;

        while (i < n) {
            if (s[i] == '1') {
                i++;
                continue;
            }

            int j = i;
            while (j < n && s[j] == '0') j++;

          
            int prev = (i > 0 ? s[i - 1] : '0');

            for (int k = i; k < j; k++) {
                int next = (k + 1 < n ? s[k + 1] : '0');

                if (prev == '0' && next == '0') {
                    student_add++;
                    prev = '1'; 
                } else {
                    prev = '0';
                }
            }

            i = j;
        }

        cout << count_ones + student_add << '\n';
    }

    return 0;
}