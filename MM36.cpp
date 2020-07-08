#include <bits/stdc++.h>
using namespace std;
int is_prime(int);
int main()
{
	int number;
	cin>>number;
	while (number!=0)
    {
        int count = 0;
        for(int i = 2;i<number;i++)
            if(is_prime(i))
                count++;
        cout<<count<<endl;
        cin>>number;
    }
    return 0;
}

int is_prime(int num)
{
	int i;
	if(num==1)
		return 0;
    else
    {
		for(i=2;i<num;i++)
        {
			if(num%i==0)
            {
				return 0;
			}
		}
	}
	return 1;
}
