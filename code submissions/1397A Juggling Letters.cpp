#include <bits/stdc++.h>
using namespace std;
int printFrequency(string str,int n)
{
    map<char, int> M;
    for (int i = 0; i<str.length(); i++) {
        if (M.find(str[i]) == M.end()) {
            M[str[i]] = 1;
        }
   else {
            M[str[i]]++;
        }
    }
    int flag=1;
    for (auto& it : M) {
        if(it.second%n!=0){
            cout << "NO" << endl;
            flag=0;
            break;
        }
    }
    if(flag)
        cout << "YES" << endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<string> str(n);
        string fin,s;
        for(int i=0;i<n;i++){
            cin >> s;
            str.push_back(s);
            fin+=s;
        }
        printFrequency(fin,n);
    }
    return 0;
}