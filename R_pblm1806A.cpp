#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sx,dx,sy,dy;
        cin>>sx>>sy>>dx>>dy;
        if(dy<sy){
            cout<<-1<<endl;
            continue;
        }
        int moves=dy-sy;
        sx=sx+moves;
         
        if(sx<dx){
            cout<<-1<<endl;
            continue;
        }
        moves=moves+(sx-dx);
        cout<<moves<<endl;

    }
}