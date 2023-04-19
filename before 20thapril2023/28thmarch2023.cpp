#include <bits/stdc++.h>
using namespace std;

const int N=-10000;

int main(){
	int n=0,i=0,k=0;
	cin>>n;
	vector<int> v;
	for(i=0;i<7;i++){
		cin>>k;
		v.push_back(k);
	}
	int min=0;
	vector<int> sum;
	sum.push_back((v[0]*v[1])/v[5]);
	sum.push_back(v[2]*v[3]);
	sum.push_back(v[4]/v[6]);
	sort(sum.begin(),sum.end());
	min=sum[0];
	cout<<min/n;
	return 0;
	
	
}