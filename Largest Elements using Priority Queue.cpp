#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    priority_queue<int> pq;
    while(n--){ int x; cin>>x; pq.push(x); }

    while(k--) cout<<pq.top()<<" ", pq.pop();
}
