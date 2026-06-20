/*#include<bits/stdc++.h>
using namespace std;

void sufflearray(vector<int> &v,int n){
  if(n <= 1) return;
 int temp = v[0];
    for(int i=1;i<=n;i++){
        v[i-1] = v[i];
    }
           v[n-1] = temp;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
       vector<int> v(n);
         for(int i=0;i<n;i++){
            cin >> v[i];
        }
      for(int j=1;j < n;j++){
             if((j+1-v[j])==(j-v[j-1])){
                 sufflearray(v,n);
            }
        }

        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
             cout << endl;
    }
}*/
    
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 vector<int> v(n);
     for(int i=0;i<n;i++){
            cin >> v[i];
        }
  sort(v.begin(), v.end(), greater<int>());
     for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}