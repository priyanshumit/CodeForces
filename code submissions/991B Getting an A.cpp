#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,ans{0};
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    sum=accumulate(arr,arr+n,0);
    if(sum>=4.5*n)
        cout << 0;
    else{
        sum=ceil(4.5*n-sum);
        for(int i=0;sum>0;i++){
            sum-=5-arr[i];
            ans++;
        }
        cout << ans;
    }
    return 0;
}