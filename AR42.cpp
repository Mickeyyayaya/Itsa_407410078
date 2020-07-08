#include<iostream>
using namespace std;
int main()
{
    int num, max=-1, min=999, i;
    for(i=0; i<10; i++)
    {
        cin>>num;
        if(num>max) max=num;
        if(num<min) min=num;
    }
    cout<<"Largest number = "<<max<<endl;
    cout<<"Smallest number = "<<min<<endl;
    return 0;
}
