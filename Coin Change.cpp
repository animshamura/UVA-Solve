#include <bits/stdc++.h>
using namespace std;

int coins[] = {50, 25, 10, 5, 1};
int ways[8192];

void SaveWays(){
    ways[0] = 1;
    for (int i = 0; i < 5; ++i)
        for (int j = coins[i]; j < 8192; j++) 
             ways[j] += ways[j - coins[i]];
}
int main(){   
    SaveWays();
    int money;
    while (cin >> money) cout << ways[money] << endl;        
    return 0;
}
