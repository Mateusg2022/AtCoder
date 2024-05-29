#include <bits/stdc++.h>
using namespace std;

void solve(){
//1≤N,M,L≤100
//0≤Ai​,Bi​,Ci​≤108
//1≤Q≤2×105
//0≤Xi​≤3×10

  //credo q feiura desculpa quem ta vendo iss, 
  //mas é q eu to com preguiça
  int n,m,l,q;
  cin >> n;
  vector<int> A,B,C,X;
  int temp;
  for(int i=0; i<n; i++){
    cin >> temp;
    A.push_back(temp);
  }cin >> m;
  for(int i=0;i<m;i++){
    cin >> temp;
    B.push_back(temp);
  }cin >> l;
  for(int i=0;i<l;i++){
    cin >> temp;
    C.push_back(temp);
  }cin >> q;
  for(int i=0;i<q;i++){
    cin >> temp;
    X.push_back(temp);
  }
  set<int> s;
  for(int i=0; i<n; i++){
    for(int j=0;j<m;j++){
      for(int w=0;w<l;w++){
        s.insert(A[i]+B[j]+C[w]);
      }
    }
  }

  for(int i=0;i<q;i++){
    if(s.find(X[i]) != s.end()) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}

int main(){
  solve();
}