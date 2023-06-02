#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(!a & !b) break;
        int ans = 0;
        for(int i = a; i <= b; i++){
             if((int)sqrt(i)*(int)sqrt(i)==i) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
