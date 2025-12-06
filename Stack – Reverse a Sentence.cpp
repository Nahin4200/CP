#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    stack<string> st;
    while(n--){ string s; cin>>s; st.push(s); }

    while(!st.empty()){ cout<<st.top()<<" "; st.pop(); }
}
