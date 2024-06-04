#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define array vector<int>
#define ll long long
#define pii pair<int,int>
#define forj(j,n) for(int j=0;j<n;j++)
/*
Problem Statement
We have a sequence of
N positive integers: A=(A1​,…,AN​).
Let B be the concatenation of 10¹⁰⁰ copies of A.
Consider summing up the terms of
B from left to right. When does the sum exceed X for the first time?
In other words, find the minimum integer k such that:
∑​Bi​>X
*/
void solve(){
  ll int n,k;
  cin >> n;
  vector<ll int> v(n);
  ll int arraySum = 0, sum = 0, cnt = 0;
  for(auto &a: v){
    cin >> a;
    arraySum += a;
  }
  cin >> k;
  ll int P = k/arraySum;
  ll int ans = n*P;
  sum += P*(arraySum); 
  //k -= sum;
  //sum = 0;
  for(auto&a : v){
    sum += a;
    ans++;
    if(sum > k) break;  
  }/*input:
  3
  3 5 2
  26*/
  cout << ans << endl;
}

int main(){
  solve();
}