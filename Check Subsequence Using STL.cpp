#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b; cin>>a>>b;
    int j=0;
    for(char c:b) if(j<a.size() && a[j]==c) j++;
    cout<<(j==a.size()?"YES":"NO");
}
