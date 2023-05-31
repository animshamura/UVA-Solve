#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main() {
    ull n;
    while (cin>>n) cout<<n-1 + (ull)log2(n-1)<<endl;
    return 0;
}
