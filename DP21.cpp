#include<iostream>
using namespace std;


void initialize(int fib[])
{
    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i < 100; i++)
    {
        fib[i] += fib[i - 1];
        fib[i] += fib[i - 2];
    }
}

int main()
{
    int fib[100] = { 0 };
    initialize(fib);

    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        cout<<fib[m - 1]<<endl
        ;
    }
    return 0;
}
