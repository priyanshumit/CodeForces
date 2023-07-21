#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,one{0},two{0},three{0},m;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    one=count(arr,arr+n,1);
    two=count(arr,arr+n,2);
    three=count(arr,arr+n,3);
    m=max({one,two,three});
    if(m==one)
        cout << two+three;
    else if(m==two)
        cout << one+three;
    else
        cout << two+one;
    return 0;
}