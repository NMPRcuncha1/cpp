#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

const int N=0;
#define INF 32700

int main(){
	long long int n=0;
	int r=0;
	vector<int> v;
	cin>>n;
	while(n){
		r=n%10;
		n=n/10;
		if(n!=0)
			if(r>4)
				r=9-r;
		if(n==0 && r!=9 && r>4)
			r=9-r;
		v.push_back(r);
	}
	for(int i= int(v.size())-1;i>=0;i--)
		cout<<v[i];
	return 0;
}