#include <bits/stdc++.h>
using namespace std;
int idades[3];
int main(){
  cin>>idades[0];
  cin>>idades[1];
  cin>>idades[2];
  sort(idades, idades+3);
  cout<<idades[1]<<"\n";
  return 0;
}
