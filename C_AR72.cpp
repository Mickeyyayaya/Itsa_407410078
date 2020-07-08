#include<bits/stdc++.h>
using namespace std;

int main()
{
    int full = 250, half = 175;
    int fp,hp;
    int ncase;
    cin>>ncase;
    for(int i = 0; i<ncase; i++){
        cin>>fp>>hp;
        cout<<fp*full+hp*half<<endl;
    }
    return 0;
}