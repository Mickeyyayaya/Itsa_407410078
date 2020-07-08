#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num ,pow;
    cin>>num;
    while(cin>>num)
    {
        int a=2;
        for (;num>=a;a++)
        {
            pow=0;
            while (num%a==0)
            {
                num/=a;
                pow++;
            }
            if (pow>0)
            {
                cout<<a;
                if (pow>1)
                    cout<<"^"<<pow;
                if (num>1)
                    cout<<"*";
                else
                    cout<<endl;
            }
        }
    }
    return 0;
}
