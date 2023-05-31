#include<bits/stdc++.h>
using namespace std;
int main(){
 int a[3];
 while(cin>>a[0]>>a[1]>>a[2]){
     if(!a[0]&&!a[1]&&!a[2]) break;
     sort(a,a+3);
     if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1]) cout<<"right\n";
     else cout<<"wrong\n";
 }
return 0;
}
