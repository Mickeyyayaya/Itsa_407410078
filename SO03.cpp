#include <bits/stdc++.h>
using namespace std;
#define N 10010
int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main()
{
    while(1){
        int num, enemy[N], sold[N], count=0, i, j;
        cin>>num;
        if(num==0)  break;
        for(i=0; i<num; i++)
            cin>>enemy[i];
        for(i=0; i<num; i++)
            cin>>sold[i];
        qsort(enemy, num, sizeof(int), compare);
        qsort(sold, num, sizeof(int), compare);
        i=j=0;
        while(j<num){
            if(enemy[i]<sold[j]){
                count++;
                i++;
                j++;
            }
            else
                j++;
        }
        cout<<count<<endl;
    }
    return 0;
}
