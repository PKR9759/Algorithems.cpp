#include<bits/stdc++.h>
using namespace std;
// sqrt by newton-raphson method
double SQRT(float s,float tolerance){
	float x0=s,x1=0;//guess value
	float error =1.0;
	while(error>tolerance){
		x1=0.5 * (x0 + s/x0);//formula
		error =abs(x1-x0); // calculating error according to tolerance
		x0=x1;
	}
	return x1;
}


int main(){
	float num;cin>>num;
	float tolerance=1e-7;
	cout<<"sqrt = "<<SQRT(num,tolerance);
   

}
