#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main(){
	int n=0,m=0;
	int flag=0,flag1=2;
	cin>>n>>m;
	for(int i=0; i<n;i++){	
		
		if(flag==0 && flag1!=2){
				
			for(int j=0;j<m-1;j++){
				cout<<".";		
			}
				
		cout<<"#";
		flag=1;
		flag1=2;
		cout<<"\n";
		continue;
		}
		
		if(flag==1 && flag1!=2){
			cout<<"#";
			for(int j=0;j<m-1;j++){
				cout<<".";
			}
			
			
		flag=0;
		flag1=2;
		cout<<"\n";	
		continue;
		}
		
		
		if(flag1==2){
			for(int j=0;j<m;j++)
				cout<<"#";
		flag1=0;
		if(i!=n-1){
			cout<<"\n";
		}
		}
	

	}
	return 0;
	
}