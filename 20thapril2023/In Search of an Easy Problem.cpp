#include <bits/stdc++.h>
using namespace std;

const int N=0;
#define INF 32700

int main(){
	int n=0,flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int k=0;
		cin>>k;
		if(k==1)
			flag=1;
	}
	if(flag==1)
		cout<<"HARD";
	else
		cout<<"EASY";
	return 0;
}