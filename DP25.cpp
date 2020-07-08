#include <iostream>

using namespace std;

int main()
{
    long long int num[100]={0};
    int n, i;
    num[0]=1;
    num[1]=num[2]=2;
    for(i=3; i<=90; i++)
        num[i]=num[i-1]/4+num[i-2]/2+num[i-3];
    while(cin>>n)
        cout<<num[n]<<endl;
    return 0;
}
