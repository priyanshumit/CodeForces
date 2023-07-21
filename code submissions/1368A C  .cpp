#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,ans{0},a,b,flag;
        cin >> a >> b >> n;
        while(n>=a&&n>=b){
            flag = a>b?1:0;
            if(flag)
                b+=a;
            else
                a+=b;
            ans++;
        }
        cout << ans <<endl;
    }
    return 0;
}