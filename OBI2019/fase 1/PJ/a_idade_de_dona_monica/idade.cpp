#include <bits/stdc++.h>
using namespace std;
int main(){
  int m,a,b,c;
  cin>>m;
  cin>>a;
  cin>>b;
  c = m - a - b;
  if(a > b && a > c){cout<<a<<"\n";} //o enunciado diz que os 3 filhos tem idades diferentes, então sempre tem algum com idade maior que as dos demais dois
  else if(b > a && b > c){cout<<b<<"\n";}
  else{cout<<c<<"\n";}
  return 0;
}
