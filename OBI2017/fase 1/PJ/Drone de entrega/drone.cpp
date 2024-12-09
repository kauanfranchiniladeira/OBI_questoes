#include <bits/stdc++.h>
using namespace std;
int a,b,c,h,l;
int resposta(int x, int y){
    return x<=h && y<=l;
}
int main(){
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>h;
    cin>>l;
    int ok = resposta(a,b) || resposta(a,c) || resposta(b,c) || resposta(b,a) || resposta(c,a) || resposta(c,b);
    if(ok){cout<<'S'<<"\n";}
    else{cout<<'N'<<"\n";}
    return 0;
}
