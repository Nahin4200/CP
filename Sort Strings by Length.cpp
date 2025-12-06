#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<string> v(n);
    for(string &s:v) cin>>s;

    sort(v.begin(), v.end(), [](string &a, string &b){
        if(a.size() != b.size()) return a.size() < b.size();
        return a < b;
    });

    for(auto &s:v) cout<<s<<" ";
}

