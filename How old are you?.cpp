
#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,y1,y2,m1,m2,d1,d2,age,i=1;
   cin>>t;
   while(t--){
      scanf("%d/%d/%d", &d1, &m1, &y1);
      scanf("%d/%d/%d", &d2, &m2, &y2);
      age=y1-y2;
      if((d2>d1 && m1==m2)||m2>m1) age--;
      cout<<"Case #"<<i++<<": ";
      if(age>130) cout<<"Check birth date\n";
      else if(age<0) cout<<"Invalid birth date\n";
      else cout<<age<<endl;
   }
    return 0;
}
