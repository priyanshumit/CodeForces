#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans{0},flag;
    cin >> a >> b >> c;
    a<b?flag=1:flag=0;
    ans = a<b?a:b;
    ans+= a+b<c?a+b:c;
    if(flag)
        ans+= b<ans?b:ans;
    else
        ans+= a<ans?a:ans;
    cout << ans;
    return 0;
}