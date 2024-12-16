#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
  if(b-a < c-b){cout<<1<<"\n";}
  else if(b-a == c-b){cout<<0<<"\n";}
  else{cout<<-1<<"\n";}
  return 0;
}
