#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int h,m;
        cin >> h >> m;
        h=(23-h)*60;
        h+=60-m;
        cout<<h<<endl;
    }
}