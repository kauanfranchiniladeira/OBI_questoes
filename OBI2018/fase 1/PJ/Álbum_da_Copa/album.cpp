#include <bits/stdc++.h> //feito por Kauan Henrique Franchini Ladeira
using namespace std;
set<int>album;
int main(){
  int n,m,x;
  cin>>n;
  cin>>m;
  for(int i = 1; i <= m; i++){
    cin>>x;
    album.insert(x);
  }
  cout<<n - album.size()<<"\n";
  return 0;
}
