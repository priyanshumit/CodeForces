#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    if(k>n)
        cout << -1;
    else{
        sort(arr,arr+n);
        cout << arr[n-k] << " " << 0;
    }
    return 0;
}