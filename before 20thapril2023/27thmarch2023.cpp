#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main(){
	int t=0,n=0,m=0,k=0;
	cin>>t;

	while(t){
		cin>>n>>m;
		int sum=(n*(n+1))/2;
		int sum2=sum;
		for(int i=1;i<=m*2;i++){
			cin>>k;
			if(i%2==0)
				sum2-=k;
			else
				sum-=k;
		}
		if(sum|sum2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		t--;
	}
	return 0;
}