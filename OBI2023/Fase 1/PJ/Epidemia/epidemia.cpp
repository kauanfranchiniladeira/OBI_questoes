#include <bits/stdc++.h> //a biblioteca bits contém a cmath
using namespace std;
int main(){
  int n,r,p;
  cin>>n;
  cin>>r;
  cin>>p;
  int dias = 0;
  infectados = n; //começa com n infectados
  while(infectados < p){
    infectados += pow(r,dias+1)*n; //cada infectado inicial infecta r infectados, estes infectam mais r^2 infectados e assim vai
    dias++;
  }
  cout<<dias<<endl;
  return 0;
}
