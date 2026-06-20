#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;

        string s;

        int x = r / (b + 1);
        int y = r % (b + 1);

        for (int i = 0; i < b + 1; i++)
        {
            for (int j = 0; j < x   ; j++)
                s += 'R';

            if (y > 0)
            {
                s += 'R';
                y--;
            }

            if (i != b)
                s += 'B';
        }

        cout << s << endl;
    }

    return 0;
}