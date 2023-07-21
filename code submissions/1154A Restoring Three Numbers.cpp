#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,m;
    cin >> a >> b >> c >> d;
    m=max({a,b,c,d});
    if(a==m)
        cout << m-d << " " << m-b << " " << m-c;
    else if(b==m)
        cout << m-a << " " << m-d << " " << m-c;
    else if(c==m)
        cout << m-a << " " << m-b << " " << m-d;
    else
        cout << m-a << " " << m-b << " " << m-c;
}