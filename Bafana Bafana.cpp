#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,p,player;
    cin>>t;
    for(int i=1; i <= t; i++){
        cin>>n>>k>>p;
        player=(k+p)%n;
        if(!player) player=n;
        cout<<"Case "<<i<<": "<<player<<endl;
    }
}
