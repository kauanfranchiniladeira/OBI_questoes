#include <bits/stdc++.h>
using namespace std;
int sequencia[510];
int main(){
  int n, count = 1;
  cin>>n;
  for(int i = 1; i <= n; i++){cin>>sequencia[i];}
  for(int i = 1; i <= n-1; i++){
    if(sequencia[i] != sequencia[i + 1]){count++;}
  }
  cout<<count<<"\n";
  return 0;
}
