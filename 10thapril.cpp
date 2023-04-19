#include <bits/stdc++.h>
using namespace std;

const int N=0;
#define INF 1e9+7

int main(){
	int n=0,m=0;
	cin>>n>>m;
	vector<int> v;
	int k=0;
	for(int i=0;i < n ;i++){
		cin>>k;
		v.push_back(k);
		cout<<v[i]<<" ";
	}
	int j=0,temp=0,d=0,flag=0;
	d=v[j];
	cout<<endl;
	while(j<n-1){
			if(flag==0){
				d=d+m;
				flag=1;
			}
			if((v[j+1]-d)>=m){
				temp++;
				cout<<d<<" ";
				d=d+1;
				// cout<<temp<<" ";
			}
			else{
				j++;
				d=v[j];
				flag=0;
			}
	}
	temp=temp+2;
	if(v[0]==-INF)
		temp--;
	if(v.back()==INF)
		temp--;
	cout<<temp;
	return 0;
}