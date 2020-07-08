#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int check;
    
    int ans = 1;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
        arr[i] = 0;
    for(int i = 0; i<n; i++){
        cin>>check;
        arr[check-1]++;
    }
    for(int i = 0; i<n; i++)
        if(arr[i] != 1)
            ans = 0;
    cout<<ans<<endl;
    return 0;
}