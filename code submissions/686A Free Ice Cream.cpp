#include <bits/stdc++.h>

using namespace std;

int solve(){
    long long int n,ice,dist{0},dem;
    char sym;
    cin >> n >> ice;
    for(int i=0;i<n;i++){
        cin >> sym >> dem;
        if(sym=='+')
            ice+=dem;
        else{
            if(dem>ice)
                dist++;
            else
                ice-=dem;
        }
    }
    cout << ice << " " << dist << endl;
    return 0;
}

int main(){
//	int t;
//	cin >> t;
//	while(t--)
        solve();
	return 0;
}