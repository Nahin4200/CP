#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; set<int> st;
    while(n--){ int x; cin>>x; st.insert(x); }
    for(int x:st) cout<<x<<" ";
}
