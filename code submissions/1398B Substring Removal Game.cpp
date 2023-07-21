#include <bits/stdc++.h>

using namespace std;

int solve(){
    int x{0};
    string s;
    vector<int> vec;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            x++;
        else{
            vec.push_back(x);
            x=0;
        }
    }
    vec.push_back(x);
    x=0;
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0;i<vec.size();i+=2)
        x+=vec[i];
    cout << x << endl;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}