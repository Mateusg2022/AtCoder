#include <bits/stdc++.h>
using namespace std;

void solve(){
  vector<int> v;
  int temp; cin >> temp;
  v.push_back(temp);
  while(temp != 0){
    cin >> temp;
    v.push_back(temp);
  }
  for(int i=v.size()-1;i>=0;i--){
    cout << v[i] << endl;
  }
}

int main(){
  solve();
}
