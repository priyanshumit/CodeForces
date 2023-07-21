#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    vector <int>v(9);
    for(int i=0;i<n;i++)
        cin >> arr1[i];
    for(int i=0;i<m;i++)
        cin >> arr2[i];
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    auto it=set_intersection(arr1, arr1+n, arr2, arr2+m, v.begin());
    v.resize(it-v.begin());
    if(v.size())
        cout << v.at(0);
    else if(arr1[0]<arr2[0])
        cout << arr1[0] << arr2[0];
    else if(arr1[0]>arr2[0])
        cout << arr2[0] << arr1[0];
    return 0;
}