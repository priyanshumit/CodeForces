#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,th,f,s,ans{0};
    cin >> t >> th >> f >> s;
    f=min(f,s);
    if(f<t){
        ans=f*256;
        t=t-f;
        th=min(t,th);
        ans+=th*32;
    }
    else
        ans=t*256;
    cout << ans;
    return 0;
}