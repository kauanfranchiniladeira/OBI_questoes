#include <bits/stdc++.h>
using namespace std;
int mes[110];
int main(){
  int x,n;
  cin>>x;
  cin>>n;
  int podeusar = x;
  for(int i = 1; i <= n; i++){
    cin>>mes[i];
    podeusar -= mes[i];
    podeusar += x;
  }
  cout<<podeusar<<"\n";
  return 0;
}
