#include <bits/stdc++.h> //problema fácil, só chato de codar
using namespace std;
int main(){
  int idade1, idade2, precoidade1, precoidade2;
  cin>>idade1;
  cin>>idade2;
  if(idade1 <= 17){precoidade1 = 15;}
  else if(idade1 <= 59){precoidade1 = 30;}
  else{precoidade1 = 20;}
  if(idade2 <= 17){precoidade2 = 15;}
  else if(idade2 <= 59){precoidade2 = 30;}
  else{precoidade2 = 20;}
  cout<<precoidade1 + precoidade2<<endl;
  return 0;
}
