#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define array vector<int>
#define long long ll
#define pii pair<int,int>
#define forj(j,n) for(int j=0;j<n;j++)
/**
 * Problem Statement

You are given a sequence of
N integers between 1 and N (inclusive):

A=(A1​,A2​,…,AN​).

Determine whether
A is a permutation of (1,2,…,N).

ex:
    5
    3 1 2 4 5
    --> Yes
*/
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    map<int,bool> map;

    fori(i,n){
        cin >> v[i];
        map[v[i]] = true;
    }

    for(int i=1;i<=n;i++){
        if(!map[i]){
            cout << "No" << '\n';
            return;
        }
    }cout << "Yes" << '\n';
    
    //começa com false
    //cout << map[3] << endl;
    
}

int main(){
    solve();
}