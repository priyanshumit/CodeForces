#include <bits/stdc++.h>

using namespace std;

int main(){
    int zero,one;
    string s;
    cin >>s;
    auto it=find(s.begin(),s.end(),'1');
    if(it==s.end())
        cout << "no";
    else{
        zero = count(it,s.end(),'0');
        if(zero>=6)
            cout << "yes";
        else
            cout << "no";
    }
}