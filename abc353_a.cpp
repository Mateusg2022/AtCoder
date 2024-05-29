#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<int> v;
  for(int i=0;i<n;i++){
    int temp; cin >> temp;
    v.push_back(temp);
  }
  for(int i=1;i<n;i++){
    if(v[i] > v[0]){
      cout << i+1 << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int main(){
  solve();
}