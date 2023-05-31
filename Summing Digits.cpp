
#include <bits/stdc++.h>
using namespace std;
long long Sum(long long n){
    int p;
    while(n>9){
        p=0;
        while(n){
            p+=n%10;
            n/=10;
        }
        n=p;
    }
    return n;
}
int main(){
   long long n;
   while(cin>>n){
       if(n==0) break;
       cout<<Sum(n)<<endl;
   }
    return 0;
}
