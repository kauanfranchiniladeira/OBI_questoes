#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, p;
  cin>>n;
  cin>>p;
  ind dias = 0, bacterias = p;
  while(bacterias <= n){
    dias++;
    bacterias *= p;
  }
  cout<<dias<<endl;
  return 0;
}
