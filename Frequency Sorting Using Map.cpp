#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin>>n;
    map<int,int> mp;
    vector<int> v(n);

    for(int &i:v) cin>>i, mp[i]++;

    sort(v.begin(), v.end(), [&](int a, int b){
        if(mp[a] != mp[b]) return mp[a] < mp[b];
        return a < b;
    });

    for(int i:v) cout<<i<<" ";
}
