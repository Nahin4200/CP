#include <bits/stdc++.h>
using namespace std;
int main(){ int n,x,m=-1e9; 
           cin>>n; 
    while(n--) 
      cin>>x, m=max(m,x);
    cout<<m;
}
