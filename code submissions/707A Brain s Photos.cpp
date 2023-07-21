#include <bits/stdc++.h>

using namespace std;

int solve(){
    int m,n,flag{0};
    char c;
    cin >> n >> m;
    for(int j=0;j<n;j++)
    for(int i=0;i<m;i++){
        cin >> c;
        if(c=='C'||c=='Y'||c=='M')
            flag=1;
    }
    if(flag)
        cout << "#Color";
    else
        cout << "#Black&White";
    return 0;
}

int main(){
//	int t;
//	cin >> t;
//	while(t--)
        solve();
	return 0;
}