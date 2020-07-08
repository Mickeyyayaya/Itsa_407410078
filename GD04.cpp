#include<bits/stdc++.h>

using namespace std;
#define N 100110
typedef struct work{
    int time;
    int deadline;
}Work;

int cmp(const void* a, const void* b){
    return ((Work*)a)->deadline - ((Work*)b)->deadline;
}

int main()
{
    int ncase;
    cin>>ncase;
    while(ncase--){
        Work w[N];
        int num, sum=0, i;
        cin>>num;
        for(i=0; i<num; i++)
            cin>>w[i].time;
        for(i=0; i<num; i++)
            cin>>w[i].deadline;
        qsort(w, num, sizeof(Work), cmp);
        for(i=0; i<num; i++){
            sum+=w[i].time;
            if(sum>w[i].deadline)
                break;
        }
        if(i==num)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
