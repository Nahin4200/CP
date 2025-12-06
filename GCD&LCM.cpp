#include <bits/stdc++.h>
using namespace std;
long long gcdll(long long a,long long b){ return b?gcdll(b,a%b):a;}
int main(){ long long a,b; cin>>a>>b;
    long long g=gcdll(a,b);
    cout<<"GCD="<<g<<" LCM="<<(a/g*b);
}
