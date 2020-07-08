#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    cin >> a[5] >> a[4] >> a[3] >> a[2] >> a[1] >> a[0];
    int ans = 0;
    for(int i = 0; i<6; i++)
        ans = ans + a[i]*a[i]*a[i];
    cout<<ans<<endl; 
    return 0;
}
