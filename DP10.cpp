#include <iostream>

using namespace std;
int main()
{
    long long num[50]={0};
    int n, i, ncase;
    num[1]=num[2]=1;
    for(i=3; i<=45; i++)
        num[i]=num[i-2]+num[i-1];
    cin>>ncase;
    while(ncase--)
    {
        cin>>n;
        cout<<num[n]<<endl;
    }
    return 0;
}
