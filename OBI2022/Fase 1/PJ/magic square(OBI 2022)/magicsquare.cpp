#include <bits/stdc++.h> //feito por Kauan Henrique Franchini Ladeira, complexidade O(n^2)
using namespace std;
int main(){
  int n;
  cin>>n;
  int matriz[n][n];
  int linha,coluna,número;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin>>matriz[i][j];
      if(matriz[i][j] == 0){
        linha = i + 1;
        coluna = j + 1;
      }
    }
  }
  int somaconstante = 0, somaestranha = 0;
  if(linha != n){
    for(int k : matriz[n-1]){somaconstante += k;}
  }
  else{
    for(int k : matriz[n-2]){somaconstante += k;}
  }
  for(int k : matriz[linha-1]){somaestranha += k;}
  numero = somaconstante - somaestranha;
  cout<<numero<<"\n"<<linha<<"\n"<<coluna<<"\n";
  return 0;
}
