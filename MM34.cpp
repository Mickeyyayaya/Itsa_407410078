#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
int gcd(int i, int j){
    if(i%j==0)
        return j;
    else
        return gcd(j, i%j);
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int max=-1, min=99999, n, temp;
        cin>>n;
        while(n--){
            cin>>temp;
            if(max<temp)
                max=temp;
            if(min>temp)
                min=temp;
        }
        cout<<gcd(max,min)<<endl;
    }
    return 0;
}
