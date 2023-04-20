#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

const int N=0;
#define INF 32700

int main(){
	int n;
	cin>>n;
	int ans=0;
	while(n){
		string s;
		cin>>s;
		
		if(s=="++X" || s=="X++")
			ans+=1;
		else
			ans-=1;
		n--;
	}
	cout<<ans;
	return 0;
}