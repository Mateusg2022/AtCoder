#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s; cin >> s;
  //atcoder|begginer|contest
  int first = -1, second = -1;
  int n = s.size();
  for(int i=0;i<n;i++){
    if(s[i] == '|' && first == -1)
      first = i;
    else if(s[i] == '|' && s[first] == '|')
      second = i;
  }
  //cout << first << " " << second << endl;
  for(int i=0;i<first;i++) cout << s[i];
  for(int i=second+1;i<n;i++) cout << s[i];
  cout << endl;
  
}

int main(){
  solve();
}
