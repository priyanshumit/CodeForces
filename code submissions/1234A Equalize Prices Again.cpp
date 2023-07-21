#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x,ans{0};
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> x;
            ans+=x;
        }
        if(ans%n==0)
            cout << ans/n << endl;
        else
            cout << ans/n +1 << endl;
    }
    return 0;
}