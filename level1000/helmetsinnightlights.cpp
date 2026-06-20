#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
   long long n, cost;
        cin >> n >> cost;
    vector<pair<long long, long long>> vec(n);
     vector<long long> x(n), y(n);
  for (int i = 0; i < n; i++)
            cin >> x[i];
 for (int i = 0; i < n; i++)
            cin >> y[i];
  for (int i = 0; i < n; i++)
            vec[i] = {y[i], x[i]};
 sort(vec.begin(), vec.end());

  long long ans = cost;
long long used = 1;

for (auto val : vec)
        {
      long long cnt = val.second;
    long long c = val.first;

     if (c >= cost)
        break;

         if (used + cnt > n)
            {
                ans += (n - used) * c;
               used = n;
           break;
            }
            else
            {
              ans += cnt * c;
                used += cnt;
            }
        }

        ans += (n - used) * cost;
        cout << ans << endl;
    }
    return 0;
}