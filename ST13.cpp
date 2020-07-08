#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

int main(){
    char s[MAX], a[MAX];
    int count[30]={0}, tmp[30]={0}, n, ans, i;
    cin>>s;
    for(i=0; i<strlen(s); i++)
    {
        if(isupper(s[i]))
            count[s[i]-'A']++;
        else
            count[s[i]-'a']++;
    }
    cin>>n;
    while(n--)
    {
        ans=1;
        cin>>a;
        for(i=0; i<26; i++)
            tmp[i]=count[i];
        for(i=0; i<strlen(a); i++){
            if(isupper(a[i]))
                tmp[a[i]-'A']--;
            else
                tmp[a[i]-'a']--;
        }
        for(i=0; i<26; i++)
            if(tmp[i])
                ans=0;
        if(ans)
            cout<<a<<endl;
    }

    return 0;
}
