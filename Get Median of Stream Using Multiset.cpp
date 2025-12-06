#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    int n; cin>>n;

    while(n--){
        int x; cin>>x;
        ms.insert(x);

        auto it = ms.begin();
        advance(it, ms.size()/2);

        cout << *it << " ";
    }
}
