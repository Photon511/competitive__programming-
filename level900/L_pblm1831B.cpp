#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int arr1[n];
        int arr2[n];

        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }

        unordered_map<int,int> freq1, freq2;

        int count = 1;
        for(int i = 1; i < n; i++){
            if(arr1[i] == arr1[i-1]){
                count++;
            } else {
                freq1[arr1[i-1]] = max(freq1[arr1[i-1]], count);
                count = 1;
            }
        }
        freq1[arr1[n-1]] = max(freq1[arr1[n-1]], count);

        count = 1;
        for(int i = 1; i < n; i++){
            if(arr2[i] == arr2[i-1]){
                count++;
            } else {
                freq2[arr2[i-1]] = max(freq2[arr2[i-1]], count);
                count = 1;
            }
        }
        freq2[arr2[n-1]] = max(freq2[arr2[n-1]], count);

        int maxx = 0;

       
        for(auto &it : freq1){
            int val = it.first;
            maxx = max(maxx, it.second + freq2[val]);
        }

        for(auto &it : freq2){
            int val = it.first;
            maxx = max(maxx, it.second + freq1[val]);
        }

        cout << maxx << endl;
    }
}