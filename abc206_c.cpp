#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define array vector<int>
#define ll long long
#define pii pair<int,int>
#define forj(j,n) for(int j=0;j<n;j++)

/**
 *Problem Statement

Given an array of
N integers A=(A1​,A2​,...,AN​), find the number of pairs

(i,j) of integers satisfying all of the following conditions:

1≤i<j≤N
Ai​!=Aj
*/

//solução por força bruta: O(n²)
//solução usando hash table ou vetor auxiliar: O(n) 
void solve(){
    ll n; cin >> n;
    vector<ll> v(n);   
    map<ll,ll> map;

    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    //int total = pow(n,2);
    ll count = 0;
    for(ll i=0;i<n;i++){
        //se é a primeira vez q eu leio esse numero,
        //entao ele é diferente de todos os anteriores;
        //else:  ele é diferente de todos menos a quantidade de aparições anteriores dele
        if(map[v[i]] == 0)  count += i;
        else  count += (i-map[v[i]]);
        //atualizo quantas vezes esse numero apareceu
        map[v[i]]++;
    }
    cout << count << '\n';
}

int main(){
    solve();
}