#include <bits/stdc++.h>
using namespace std;
char resultados[10];
int main(){
  int vitorias = 0;
  for(int i = 0; i < 6; i++){
    cin>>resultados[i];
    if(resultados[i] == 'V'){vitorias++;}
  }
  if(vitorias >= 5){cout<<1<<endl;}
  else if(vitorias >= 3){cout<<2<<endl;}
  else if(vitorias >= 1){cout<<3<<endl;}
  else{cout<<-1<<endl;}
  return 0;
}
