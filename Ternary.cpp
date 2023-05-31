#include <bits/stdc++.h>
using namespace std;

long long i, j, t;
string Ternary(int t){
    string s;
 while(t!=0){
    s+=to_string(t%3);
    t=t/3;
        }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    while(cin>>t){
        if(t<0) break;
        if(t==0) cout<<0<<endl;
        else cout<<Ternary(t)<<endl;
    }
    return 0;
}
