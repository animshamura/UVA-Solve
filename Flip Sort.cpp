#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    while(cin>>s){
        int a[s];
        for(int i = 0; i < s; i++) cin>>a[i];
        
        int ans = 0;
        for(int j = 1; j < s; j++ ){
            for(int k = 0; k < s-1; k++){
                if(a[k]>a[k+1]){
                    
                    swap(a[k],a[k+1]);
                    ans++;
                }
            }
        }
            cout<<"Minimum exchange operations : "<<ans<<endl;
        }
        return 0;
    }
