#include<iostream>
using namespace std;

int main()
{
    long long int perfect[7] =
    {
        6, 28, 496,
        8128, 33550336,
        8589869056,137438691328
    };

    int n;
    cin>>n;
    for(int i = 0;i<7;i++)
        if(perfect[i]<n)
            cout<<perfect[i]<<endl;
    return 0;
}
