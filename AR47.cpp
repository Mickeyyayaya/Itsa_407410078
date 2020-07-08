#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num!=1)
    {
        if(num%2)   break;
        else    num/=2;
    }
    while(num!=1)
    {
        if(num%3)   break;
        else    num/=3;
    }
    while(num!=1)
    {
        if(num%5)   break;
        else    num/=5;
    }
    if(num!=1)
        cout<<"Irregular number!"<<endl;
    else
        cout<<"Regular number!"<<endl;
    return 0;
}
