#include<bits/stdc++.h>
using namespace std;
long long int hashFunction(string s){
	long long int p=31,m=1e9+7,hash=1,p_pow=1;//more discription in notes-->check it 
	for(int i=0;i<s.size();i++){
		hash+=((s[i]-'a'+1)*p_pow)%m;
		p_pow=(p_pow*p)%m;
	}
	return hash;
}
int main(){
	string s="kuldip_Rupsangbhai_parmar";
	cout<<hashFunction(s);

}
