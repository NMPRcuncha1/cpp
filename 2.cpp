#include <bits/stdc++.h>
using namespace std;

const int N=0;


void init_code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){

	init_code();
	int k,p=0;
	int a=1010100;
	double t,d=0;

	cin>>k>>p>>a;
	
	t= ceil(float(k)/a);
	d= ceil(float(p)/a);
	
	cout<<(t*d);
		
		



	
	
	return 0;

}