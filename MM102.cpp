#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[20000], sort, temp, first=0, i, j;
    while (cin>>sort)
    {
        if(sort==0)    break;
        if(first)
            cout<<endl;
        else
            first=1;
        for(i=0; i<sort; i++)
            cin>>num[i];
        for(i=0; i<sort-1; i++)
        {
            for(j=i+1; j<sort; j++)
            {
                if(num[i]<num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        for(i=0; i<sort; i++)
            cout<<i+1<<" "<<num[i]<<endl;
        }
        return 0;
    }
