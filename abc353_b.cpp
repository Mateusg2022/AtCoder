#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define array vector<int>
#define ll long long
#define pii pair<int,int>
#define forj(j,n) for(int j=0;j<n;j++)

void solve(){
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  int count = 0;
  int k_ = k, remaining = 0;
  for(int i=0;i<n;i++){
    if(k_ - v[i] >= 0){
      remaining = 0;
      k_ -= v[i];
    }else{
      count++;
      remaining = v[i];
      k_ = k - remaining;
    }
  }
  cout << ++count << endl;

  //another solution ig:

  //for(int i=0;i<n;){
  //  int count = 0;
  //  int k_ = k;
  //  while(k_ > 0){
  //    if(k_ - v[i] >= 0){
  //      k_ -= v[i];
  //      i++;
  //      if(k_ == 0){
  //        count++;
  //        break;
  //      }
  //    }else{
  //     count++;
  //     break;
  //    }
  //    //i++;
  //  }
  //}
  //cout << count << endl;
}

int main(){
  solve();
}