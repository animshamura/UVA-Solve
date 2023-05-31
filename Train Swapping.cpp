#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s,i=1;
    cin>>t;
    while(t--){
        cin>>s;
        int a[s];
        for(int i = 0; i < s; i++) cin>>a[i];
        
        int ans = 0;
        for(int j = 0; j < s; j++ ){
            for(int k = j+1; k < s; k++){
                if(a[j]>a[k]){
                    
                    swap(a[j],a[k]);
                    ans++;
                }
            }
        }
            cout<<"Optimal train swapping takes "<<ans<<" swaps.\n";
        }
        return 0;
    }
