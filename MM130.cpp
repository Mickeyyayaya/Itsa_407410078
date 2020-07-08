#include <bits/stdc++.h>
using namespace std;
int cmp ( const void *a , const void *b )
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int a[100];
    int i = 0;
    while (cin>>a[i])
        i++;
    qsort(a,i,sizeof(a[0]),cmp);

    if(i%2!=0)
       cout<<a[(i-1)/2]<<endl;
    else
    {
        float mid = (a[(i/2)-1]+a[(i/2)])/2 ;
        cout<<mid<<endl;
    }
    return 0;
}
