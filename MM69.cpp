#include <bits/stdc++.h>
using namespace std;

int main()
{
    float h,w;
    cin>>h>>w;
    h = h/100;
    float bmi;
    bmi = w/(h*h);
    printf("%.1f ",bmi);
    if(bmi < 18.5)
            cout<<"underweight"<<endl;
        else if(bmi < 24)
            cout<<"normal"<<endl;
        else if(bmi < 27)
            cout<<"overweight"<<endl;
        else if(bmi < 30)
            cout<<"mild obesity"<<endl;
        else if(bmi < 35)
            cout<<"moderate obesity"<<endl;
        else
            cout<<"severe obesity"<<endl;

        return 0;
}
