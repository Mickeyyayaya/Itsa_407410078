#include <bits/stdc++.h>
using namespace std;
double sum(int n)
{

    double i, s = 0;
    if(n%2 == 0)
    {
        for (i = 2; i <= n; i+=2)
            s = s + 1/i;
    }
    else
        for (i = 1; i <= n; i+=2)
            s = s + 1/i;
    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<<setprecision(12)<<sum(n)<<endl;
    return 0;
}
