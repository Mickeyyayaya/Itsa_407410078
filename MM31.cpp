#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int fac = 1;
    int ans[n];
    for(int i = 0;i<n;i++)
    {
        int num;
        cin>>num;
        for(int j=1;j<=num;j++)
            fac*=j;
        ans[i] = fac;
        fac = 1;
    }

    for(int i = 0;i<n;i++)
        cout<<ans[i]<<endl;

    return 0;
}
