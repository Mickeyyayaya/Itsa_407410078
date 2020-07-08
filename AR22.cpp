#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin>>a;
    int len = strlen(a);
    char b[1000];
    for(int i = 0;i<len;i++)
        b[i] = a[i]-3;
    for(int i = 0;i<len;i++)
        cout<<b[i];
    cout<<endl;
    return 0;
}
