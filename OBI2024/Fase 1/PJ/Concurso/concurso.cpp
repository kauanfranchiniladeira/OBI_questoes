#include <bits/stdc++.h> //solução Concurso OBI 2024
using namespace std;
int notas[510]; // Feito por Kauan Henrique Franchini Ladeira
int main(){
  int n,k;
  cin>>n>>k;
  for(int i = 0; i < n; i++){cin>>notas[i];}
  sort(notas,notas+n); //ordeno o vetor
  cout<<notas[n-k]<<"\n";
  return 0;
} //solução em O(nlogn), que passa tranquilamente no tempo
