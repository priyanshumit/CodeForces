#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector <int> v(1000);
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++)
            cin >> arr1[i];
        for(int i=0;i<m;i++)
            cin >> arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        auto it=set_intersection(arr1,arr1+n,arr2,arr2+m,v.begin());
        v.resize(it-v.begin());
        if(!v.size())
            cout <<"NO"<< endl;
        else {
            cout << "YES" << endl;
            cout << 1 << " " << v.at(0) << endl;
        }
    }
    return 0;
}