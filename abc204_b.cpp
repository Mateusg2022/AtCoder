#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define array vector<int>
#define ll long long
#define pii pair<int,int>
#define forj(j,n) for(int j=0;j<n;j++)

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    fori(i,n) cin >> v[i];
    int nutsCount = 0;
    fori(i,n){
        if(v[i] > 10){
            nutsCount += (v[i] - 10);
        }
    }
    cout << nutsCount << '\n';
}

int main(){
    solve();
}