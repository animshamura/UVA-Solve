
#include <bits/stdc++.h>

using namespace std;

int Limit(int t){
    int p;
    while(t>9){
        p=0;
        while(t){
            p+=t%10;
            t/=10;
        }
        t=p;
    }
    return t;
}

int Value(string s){
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
       if(isalpha(s[i])) ans+=(int)tolower(s[i])-96;
    }
    ans=Limit(ans);
    return ans;
}

int main(){
    string a,b;
    while(getline(cin,a)){
        getline(cin,b);
        double x = Value(a);
        double y = Value(b);
       printf("%.2f%\n",(min(x,y)/max(x,y))*100);
    }
    return 0;
}
