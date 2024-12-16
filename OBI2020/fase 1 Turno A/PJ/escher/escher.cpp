#include <bits/stdc++.h> //solução escher OBI 2020 Turno A fase 1, feito por Kauan Henrique Franchini Ladeira
using namespace std;
const int maxn = 1e5 + 10;
int alturas[maxn];
int main(){ //código feito em O(n)
  int n;
  cin>>n;
  for(int i = 1; i <= n; i++){cin>>alturas[i];}
  bool escher = true;
  int constante = alturas[1] + alturas[n];
  for(int i = 1; i <= n; i++){
    if(constante != alturas[i] + alturas[n - i + 1]){escher = false;}
    if(!escher){break;}
  }
  if(escher){cout<<"S"<<"\n";}
  else{cout<<"N"<<"\n";}
  return 0;
}  
