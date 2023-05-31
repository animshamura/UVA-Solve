#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,a,b,c,i=1;
   cin>>t;
   while(t--){
       cin>>a>>b>>c;
       cout<<"Case "<<i++<<": "<<(a+b+c)-max(a,(max(b,c)))-min(a,(min(b,c)))<<endl;
   }
    return 0;
}
