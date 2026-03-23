#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        string s = to_string(n);
        int len = s.size();

        int k = 1e9;

        for(int i = len - 1; i >= 0; i--){
            if(s[i] == '0'){
                for(int j = i - 1; j >= 0; j--){
                    if(s[j] == '0'){
                        k = min(k, (len - i - 1) + (i - j - 1));
                        break;
                    }
                }
            }
        }

      
        for(int i = len - 1; i >= 0; i--){
            if(s[i] == '5'){
                for(int j = i - 1; j >= 0; j--){
                    if(s[j] == '2'){
                        k = min(k, (len - i - 1) + (i - j - 1));
                        break;
                    }
                }
            }
        }

      
        for(int i = len - 1; i >= 0; i--){
            if(s[i] == '0'){
                for(int j = i - 1; j >= 0; j--){
                    if(s[j] == '5'){
                        k = min(k, (len - i - 1) + (i - j - 1));
                        break;
                    }
                }
            }
        }

    
        for(int i = len - 1; i >= 0; i--){
            if(s[i] == '5'){
                for(int j = i - 1; j >= 0; j--){
                    if(s[j] == '7'){
                        k = min(k, (len - i - 1) + (i - j - 1));
                        break;
                    }
                }
            }
        }

        cout << k << endl;
    }
}