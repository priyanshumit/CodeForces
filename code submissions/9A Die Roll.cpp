#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;
    cin >> a >> b;
    x=7-max(a,b);
    if(x==1)
        cout << "1/6";
    else if(x==2)
        cout << "1/3";
    else if(x==3)
        cout << "1/2";
    else if(x==4)
        cout << "2/3";
    else if(x==5)
        cout << "5/6";
    else if(x==6)
        cout << "1/1";
    return 0;
}