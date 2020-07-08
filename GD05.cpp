#include<bits/stdc++.h>
#define N 10010

using namespace std;
int main()
{
    int job, machine, n, time[N]={0}, i, j, min, max;
    cin>>job>>machine;
    for(i=0; i<job; i++)
    {
        cin>>n;
        for(min=0, j=1; j<machine; j++)
            if(time[j]<time[min])   min=j;
        time[min]+=n;
    }
    for(max=0, i=1; i<machine; i++)
        if (time[max]<time[i]) max=i;
    cout<<time[max]<<endl;
}
