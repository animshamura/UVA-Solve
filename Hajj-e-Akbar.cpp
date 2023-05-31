
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i =1;
    while(cin>>s){
        if(s.length()==1) break;
        cout<<"Case "<<i++<<": ";
        if(s[0]=='H') cout<<"Hajj-e-Akbar\n";
        else cout<<"Hajj-e-Asghar\n";
    }

    return 0;
}
