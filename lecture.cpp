#include <bits/stdc++.h>
using namespace std;
map<string , string>languages;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < m; i++){
		string a,b;
		cin>>a>>b;
		languages[a] = b;
	}
	for(int i = 0; i < n; i++){
		string c;
		cin>>c;
		if(c.size() <= languages[c].size()){cout<<c<<" ";}
		else{cout<<languages[c]<<" ";}
	}
	cout<<"\n";
	return 0;
}