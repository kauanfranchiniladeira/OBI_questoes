#include <bits/stdc++.h>
using namespace std;
int main(){
  int e,d;
  cin>>e;
  cin>>d;
  if(e > d){cout<<e + d<<"\n";}
  else{cout<<2 * (d - e)<<"\n";}
  return 0;
}
