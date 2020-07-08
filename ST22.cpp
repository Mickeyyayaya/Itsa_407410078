#include <bits/stdc++.h>
using namespace std;
int main(){
    int count;
    char s[20];
    cin>>count;
    while(count--){
        int sum=0, i, j, len;
        for(j=0; j<2; j++){
            long num=0, temp[20];
            cin>>s;
            len=strlen(s);
            for(i=0; i<len; i++)
                temp[i]=s[i]-'0';
            for(i=0; i<len; i++)
                num|=(temp[i]<<(len-1-i));
            sum+=num;
        }
        cout<<sum<<endl;
    }
    return 0;
}
