#include<iostream>

using namespace std;

int main()
{
    int num, tmp, i, first=1;
    bool check[100000]={0};
    cin>>num;
    while(cin>>tmp)
        check[tmp]=true;
    for(i=1; i<=num; i++){
        if(!check[i]){
            if(first)
                cout<<i;
            else
                cout<<" "<<i;
            first=0;
        }
    }
    cout<<endl;
    return 0;
}