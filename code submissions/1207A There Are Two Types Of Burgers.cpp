#include <bits/stdc++.h>

using namespace std;

int solve(){
    int b,p,f,h,c,x,profit{0};
    cin >> b >> p >> f >> h >>c;
    b=b/2;
    if(c>=h){
        x=min({f,b});
        b=b-x;
        profit+=x*c;
        if(b>0){
            x=min({p,b});
            profit+=x*h;
        }
    }
    else{
        x=min({p,b});
        b=b-x;
        profit+=x*h;
        if(b>0){
            x=min({f,b});
            profit+=x*c;
        }
    }
    cout << profit << endl;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}