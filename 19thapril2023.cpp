#include <bits/stdc++.h>
using namespace std;

const int N=0;
#define INF 32700

int main(){
	int n;
	int ans=0;
	cin>>n;
	while(n){
		string shape;
		cin>>shape;
		if(shape=="Tetrahedron")
			ans+=4;
		else if(shape=="Cube")
			ans+=6;	
		else if(shape=="Octahedron")
			ans+=8;
		else if(shape=="Dodecahedron")
			ans+=12;
		else
			ans+=20;
		n--;
	}
	cout<<ans;
	return 0;
}