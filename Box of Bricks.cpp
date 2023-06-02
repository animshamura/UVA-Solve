
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,c=1;
    while(cin>>a){
        if(!a) break;
        int ar [a];
        int sum = 0, move=0, lim;
        for(int i = 0; i < a; i++) {cin>>ar[i]; sum+=ar[i];}
        lim = sum/a;
        for(int i = 0; i < a; i++) if(ar[i]>lim) move+=ar[i]-lim;
        cout<<"Set #"<<c++<<endl;
        cout<<"The minimum number of moves is "<<move<<"."<<endl<<endl;
    }
    return 0;
}
