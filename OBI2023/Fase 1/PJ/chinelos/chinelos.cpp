#include <bits/stdc++.h>
using namespace std;
int chinelos[510];
int main(){
  int n, p, vendidos = 0;
  cin>>n;
  for(int i = 1; i <= n; i++){cin>>chinelos[i];}
  cin>>p;
  for(int i = 1; i <= p; i++){
    int k;
    cin>>k;
    if(chinelos[k] != 0){
      chinelos[k]--;
      vendidos++;
    }
  }
  cout<<vendidos<<"\n";
  return 0;
}
