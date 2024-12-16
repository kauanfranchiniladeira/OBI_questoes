#include <bits/stdc++.h> //código feito por Kauan Henrique Franchini Ladeira
using namespace std;
int main(){
  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
  if(a == b && b == c){
    cout<<3<<"\n";
    return 0;
  }
  else if(a < b && b < c){
    cout<<1<<"\n";
    return 0;
  }
  else if(a == b && a + b < c){
    cout<<1<<"\n";
    return 0;
  }
  cout<<2<<"\n";
  return 0;
}
