#include <bits/stdc++.h>
using namespace std;
//abc240_a - Edge Checker
void solve(){
    int a,b; cin >> a >> b;
    cout << (abs(a-b) == 1 || abs(a-b) == 9  ? "Yes" : "No") << endl;
}

int main(){
    solve();
}