#include <bits/stdc++.h>
using namespace std;
int main(){
  int r,f,c;
  cin>>r;
  cin>>f;
  cin>>c;
  if(f > 3*r || c < 95){cout<<"diminuir"<<"\n";}
  else if(f < 2*r && c > 97){cout<<"aumentar"<<"\n";}
  else{cout<<"manter"<<"\n";}
  return 0;
}
