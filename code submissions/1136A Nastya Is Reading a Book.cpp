#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin >> n;
    int arr[2*n];
    for(i=0;i<2*n;i++)
        cin>>arr[i];
    cin >> k;
    for(i=1;arr[i]<k;i+=2);
    i/=2;
    cout << n-i;
    return 0;
}