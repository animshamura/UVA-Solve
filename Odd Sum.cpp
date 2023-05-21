#include <bits/stdc++.h>
using namespace std;
int main(){
   double t,a,b;
   cin>>t;
   while(t--){
       cin>>a>>b;
       double n = (b-a)/2+1;
       cout<<(n/2)*(2*a+2*n-2)<<endl;
   }
    return 0;
}
