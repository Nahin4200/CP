#include <bits/stdc++.h>
using namespace std;
int main(){ string s; 
           cin>>s; 
           int c=0;
    for(char x:s) if(string("aeiouAEIOU").find(x)!=string::npos) c++;
    cout<<c;
}
