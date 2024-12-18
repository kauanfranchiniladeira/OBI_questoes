#include <bits/stdc++.h>
using namespace std;
int tamanhos[1010];
int main(){
  int n,p,m;
  cin>>n;
  int pequeno = 0;
  int medio = 0;
  for(int i = 0; i < n; i++){
    cin>>tamanhos[i];
    if(tamanhos[i] == 1){pequeno++;}
    else{medio++;}
  }
  cin>>p;
  cin>>m;
  if(p >= pequeno && m >= medio){cout<<'S'<<"\n";}
  else{cout<<'N'<<"\n";}
  return 0;
}
