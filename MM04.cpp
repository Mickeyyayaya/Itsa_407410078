#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int perfect[7] =
    {
        6, 28, 496,
        8128, 33550336,
        8589869056,
        137438691328
    };

    int n;
    cin>>n;
    long long int ans[n];
    for(int i = 0 ; i < n ; i++)
        ans[i] = 0;
    for(int i = 0 ; i < n ; i++)
    {
        long long int num;
        cin>>num;
        for(int j = 0; j<7; j++)
            if(num == perfect[j])
                ans[i] = 1;
    }
    for(int i = 0 ; i < n ; i++)
        if(ans[i]==1)
            cout<<"perfect"<<endl;
        else
            cout<<"nonperfect"<<endl;
}
