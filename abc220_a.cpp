#include <bits/stdc++.h>
using namespace std;
//abc220_a - Find Mul�ple
void solve(){
    int a,b,c; cin >> a >> b >> c;
    for(int i=a;i<=b;i++){
        if(i%c == 0 /*|| c%i == 0*/){
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    solve();
}