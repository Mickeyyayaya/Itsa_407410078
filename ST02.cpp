#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100];
    while(cin>>ch)
    {
        int len = strlen(ch);
        int ans=0;
        for(int i = 0; i<len;i++)
            ans = ans*26+ch[i]-'A'+1;
        cout<<ans<<endl;
    }

    return 0;
}
