#include <bits/stdc++.h>
using namespace std;
int binaryExp(int a,int b){
	int ans=1;
	while(b){
		
		if(b&1){
			ans=ans*a;
		}
		
		a*=a;
		b=(b>>1);
	}
	return ans;
}
int main(){

	
	int a,b;cin>>a>>b;
    int ans=binaryExp(a,b);
	cout<<ans;
	
}
