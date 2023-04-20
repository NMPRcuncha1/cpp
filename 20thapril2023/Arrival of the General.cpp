#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

const int N=0;
#define INF 32700

int main(){
	int n;
	cin>>n;
	int arr[n];
	int min=0,max=0,imin=0,imax=0,ans=0;
	rep(i,0,n){
		cin>>arr[i];
		if(!i)
			min=arr[0];
		if(min>=arr[i]){
			min=arr[i];
			imin=i;
		}
		if(max<arr[i]){
			max=arr[i];
			imax=i;
		}
	}
	if(imin==(n-1)&&imax==0)
		ans=0;
	else if(imin<imax)
		ans=imax+(n-1)-imin-1;
	else
		ans=imax+(n-1)-imin;
	
	
	cout<<ans;
	return 0;
}