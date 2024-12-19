#include <bits/stdc++.h>
using namespace std;
int main(){
  int p,d,b;
  cin>>p;
  cin>>d;
  cin>>b;
  int pontos = p + 2*d + 3*b;
  if(pontos >= 150){cout<<'B'<<"\n";}
  else if(pontos >= 120){cout<<'D'<<"\n";}
  else if(pontos >= 100){cout<<'P'<<"\n";}
  else{cout<<'N'<<"\n";}
  return 0;
}
