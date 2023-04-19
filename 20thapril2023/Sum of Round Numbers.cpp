#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

const int N=0;
#define INF 32700

void solve(){
	int num=0,power=1,k=0;
	vector<int>v;
	cin>>num;
		
	while(num){
			
		if(num%10)
			v.push_back(num%10*power);
		power=power*10;
		num=num/10;
	}
		
		
	cout<<v.size()<<endl;
	
	
	for(auto a: v)
		cout<<a<<' ';
	
	
	cout<<endl;
}

int main(){
	int n=0;
	cin>>n;
	
	while(n--)
		solve();
	
	
	return 0;
}