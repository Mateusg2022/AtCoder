#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

  int n; cin >> n;
  vector<pair<string, ll int>> table;
  int indexLess = 0;

  for(int i=0;i<n;i++){
    string s; ll int num;
    cin >> s; cin >> num;
    table.push_back({s,num});

    if(table[i].second < table[indexLess].second)
      indexLess = i;
  }
  
  for(int i = indexLess; i < n + indexLess /*-1*/ ; i++){
    //cout << "index: " << i << " n+indexLess: " << n+indexLess << " - " << i%n+1 << endl;
    cout << table[i%n].first << endl;
  }


}

int main(){
  solve();
}
