#include <bits/stdc++.h>
using namespace std;
int main(){ int n,c,r=0; 
cin>>n; 
c=n;
    while(c){
    r=r*10+c%10; 
    c/=10;
    }
    cout<<(r==n?"YES":"NO");
}
