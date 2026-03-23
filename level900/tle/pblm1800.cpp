#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        string s;
        cin >> s;
        for(int i = 0; i < n; i++)
            s[i] = tolower(s[i]);
     long long i = 0;
    bool flag = true;
          if(i < n && s[i] == 'm') {
            while(i < n && s[i] == 'm')
             i++;
        } 
        else 
        flag = false;

        
        if(flag && i < n && s[i] == 'e') {
            
            while(i < n && s[i] == 'e') 
            i++;
        } 
        else 
        flag = false;

       
        if(flag && i < n && s[i] == 'o') {
            while(i < n && s[i] == 'o') 
            i++;
        } else
         flag = false;

        
        if(flag && i < n && s[i] == 'w') {

            while(i < n && s[i] == 'w') 
            i++;
        } 
        else 
        flag = false;

        if(i != n) flag = false;

        cout << (flag ? "YES\n" : "NO\n");
    }
}
